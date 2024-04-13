//does not work

#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream inFile("Lab10-Question4.bin", ios::binary);
    if (!inFile) {
        cerr << "Error opening file for reading." << endl;
        return 1;
    }

    char message[41]; // 40 characters plus null terminator
    int num;
    int skip = 17; // Initial skip value

    for (int i = 0; i < 40; ++i) {
        inFile.seekg(skip * sizeof(int), ios::cur); // Skip integers
        inFile.read((char*)&num, sizeof(int));
        cout << "Integer value read: " << num << endl; // Print integer value for debugging
        if (num >= 32 && num <= 126) {
            message[i] = char(num); // Assign integer value directly to character
        } else {
            cerr << "Invalid character encountered." << endl;
            inFile.close();
            return 1;
        }
        skip--; // Decrease skip value for next iteration
    }
    message[40] = '\0'; // Null-terminate the string

    cout << "Secret Message: " << message << endl;

    inFile.close();

    return 0;
}
