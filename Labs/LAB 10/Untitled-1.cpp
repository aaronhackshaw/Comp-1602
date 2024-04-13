#include <iostream>
#include <fstream>

using namespace std;

// Function to write integers 1 to 100 to a binary file
void writeIntegersToFile(const char* filename) {
    ofstream outFile(filename, ios::binary);
    if (!outFile) {
        cerr << "Error opening file for writing." << endl;
        return;
    }

    // Write integers 1 to 100 to the file
    for (int i = 1; i <= 100; ++i) {
        outFile.write(reinterpret_cast<const char*>(&i), sizeof(i));
    }

    outFile.close();
}

// Function to read and verify the 100 integers from the binary file
void readAndVerifyIntegers(const char* filename) {
    ifstream inFile(filename, ios::binary);
    if (!inFile) {
        cerr << "Error opening file for reading." << endl;
        return;
    }

    int num;
    for (int i = 1; i <= 100; ++i) {
        inFile.read(reinterpret_cast<char*>(&num), sizeof(num));
        if (num != i) {
            cout << "Verification failed at position " << i << endl;
            break;
        }
    }

    inFile.close();
}

// Function to read all integers from the binary file and display them
void readAndDisplayAllIntegers(const char* filename) {
    ifstream inFile(filename, ios::binary);
    if (!inFile) {
        cerr << "Error opening file for reading." << endl;
        return;
    }

    int num;
    while (inFile.read(reinterpret_cast<char*>(&num), sizeof(num))) {
        cout << num << endl;
    }

    inFile.close();
}

int main() {
    const char* filename = "Lab10-Question1.bin";

    // Part (a): Write integers 1 to 100 to Lab10-Question1.bin
    writeIntegersToFile(filename);

    // Part (b): Read and verify the 100 integers from the binary file
    readAndVerifyIntegers(filename);

    // Part (c): Read all integers from the binary file and display them
    cout << "Reading all integers from the file:" << endl;
    readAndDisplayAllIntegers(filename);

    return 0;
}
