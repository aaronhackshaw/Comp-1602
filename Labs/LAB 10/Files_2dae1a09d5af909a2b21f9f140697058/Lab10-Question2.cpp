#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

struct Student {
	char name [25];
	int mark;
	char grade;
	bool passed;
};


void displayStudent (Student student) {
	cout << "Name: " << student.name << endl;
	cout << "Mark: " << student.mark << endl;
	cout << "Grade: " << student.grade << endl;
	
	cout << "Passed: ";
	
	if (student.passed) 
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
		
	cout << endl;
}


// Function for Question 2 (a)

int readStudents (Student students[], char filename[]) {

	return 0;
}


// Function for Question 2 (b)

void saveStudents (Student students[], int numStudents, char filename[]) {

}


int main () {

  	ifstream inputFile;
  	
  	Student students[100];
  	Student student;
  	
  	char filename1[25];
  	char filename2[25];
  	
    int numStudents;
  	
  	// Question 2(c)
	   
  	cout << "Reading values from input file ..." << endl << endl;
	
	strcpy (filename1, "marks.txt");
	
	// write code to read data from input file
	
	cout << "File read. Number of students = " << numStudents << endl;
	
	
	// Question 2(d)
	
	cout << "Saving Student structs to binary file ..." << endl << endl;

	strcpy (filename2, "Lab10-Question2.bin");

	// write to write data to the binary file
	
	
	// Question 2(e)
	
	cout << "Reading Student structs from binary file ..." << endl << endl;
  	
	// write code to read data from the binary file
			
	return 0;
}
