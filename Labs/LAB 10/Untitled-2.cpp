#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

struct Student {
    char name[25];
    int mark;
    char grade;
    bool passed;
};

// Function to read students' data from a text file
int readStudents(Student students[], char filename[]) {
    ifstream inFile(filename);
    if (!inFile) {
        cerr << "Error opening file for reading." << endl;
        return 0;
    }

    int count = 0;
    while (inFile >> students[count].name >> students[count].mark) {
        count++;
    }
    inFile.close();
    return count;
}

// Function to save students' data to a binary file
void saveStudents(Student students[], int numStudents, char filename[]) {
    ofstream outFile(filename, ios::binary);
    if (!outFile) {
        cerr << "Error opening file for writing." << endl;
        return;
    }

    for (int i = 0; i < numStudents; ++i) {
        if (students[i].mark >= 80)
            students[i].grade = 'A';
        else if (students[i].mark >= 65)
            students[i].grade = 'B';
        else if (students[i].mark >= 50)
            students[i].grade = 'C';
        else
            students[i].grade = 'F';

        students[i].passed = (students[i].mark >= 50);

        outFile.write((char*)&students[i], sizeof(Student));
    }
    outFile.close();
}

// Function to display student data
void displayStudent(Student student) {
    cout << "Name: " << student.name << endl;
    cout << "Mark: " << student.mark << endl;
    cout << "Grade: " << student.grade << endl;
    cout << "Passed: " << (student.passed ? "Yes" : "No") << endl;
    cout << endl;
}

int main() {
    Student students[100];
    char filename1[] = "marks.txt";
    char filename2[] = "Lab10-Question2.bin";
    int numStudents;

    // (c) Call readStudents with the file, marks.txt
    cout << "Reading values from input file ..." << endl << endl;
    numStudents = readStudents(students, filename1);
    cout << "File read. Number of students = " << numStudents << endl;

    // (d) Call saveStudents to save student structs to binary file
    cout << "Saving Student structs to binary file ..." << endl << endl;
    saveStudents(students, numStudents, filename2);

    // (e) Read all student structs from binary file and display them
    cout << "Reading Student structs from binary file ..." << endl << endl;
    ifstream binaryFile(filename2, ios::binary);
    if (!binaryFile) {
        cerr << "Error opening binary file for reading." << endl;
        return 1;
    }

    Student temp;
    while (binaryFile.read((char*)&temp, sizeof(Student))) {
        displayStudent(temp);
    }
    binaryFile.close();

    return 0;
}
