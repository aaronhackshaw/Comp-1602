#include <iostream>
#include <fstream>
using namespace std;


int main () {

  	ofstream outputFile;
  	ifstream inputFile;

	int x, y, z;
	int x2, y2, z2;
		
	x = 10;
	y = 20;
	z = 30;

	cout << "Writing values to output file ..." << endl;
		
	outputFile.open("Lab10.bin", ios::binary | ios::out);
	
  	outputFile.write((char *) &x, sizeof(int));
  	outputFile.write((char *) &y, sizeof(int));
  	outputFile.write((char *) &z, sizeof(int));
	
	outputFile.close();

	cout << "Reading values from input file ..." << endl;
		
	inputFile.open("Lab10.bin", ios::binary | ios::in);
	
  	inputFile.read((char *) &x2, sizeof(int));
  	inputFile.read((char *) &y2, sizeof(int));
  	inputFile.read((char *) &z2, sizeof(int));
	
	cout << "x2 = " << x2 << endl;
	cout << "y2 = " << y2 << endl;
	cout << "z2 = " << z2 << endl;
	
	inputFile.close();
	 	    	
	return 0;
}
