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

// Function to search for a student's name in the binary file
int findStudent(char filename[], char studentName[]) {
    ifstream inFile(filename, ios::binary);
    if (!inFile) {
        cerr << "Error opening file for reading." << endl;
        return -1;
    }

    Student temp;
    while (inFile.read((char*)&temp, sizeof(Student))) {
        if (strcmp(temp.name, studentName) == 0) {
            inFile.close();
            return 1; // Student found
        }
        // Advance the get pointer 11 bytes
        inFile.seekg(11, ios::cur);
    }
    inFile.close();
    return 0; // Student not found
}

int main() {
    char filename[] = "Lab10-Question2.bin";
    char studentName[25];

    // Part (b): Request user input for student's name
    cout << "Enter the student's name to search: ";
    cin.getline(studentName, 25);

    // Part (a) and (b): Search for the student's name in the binary file
    int result = findStudent(filename, studentName);
    if (result == 1) {
        cout << "Student found." << endl;
    } else if (result == 0) {
        cout << "Student not found." << endl;
    } else {
        cerr << "Error occurred while searching for student." << endl;
    }

    return 0;
}
