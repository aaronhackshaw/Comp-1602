#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

struct Ingredient {
    int id;
    int kcal;
};

void writeToBinaryFile(const char* filename) {
    ifstream txtFile("snack.txt");
    ofstream binFile(filename, ios::binary | ios::out);

    if (!txtFile.is_open() || !binFile.is_open()) {
        cerr << "Error: Unable to open files." << endl;
        return;
    }

    int snackID;
    char snackName[100];
    char snackType;
    Ingredient ingredient;

    while (true) {
        // Read snack details
        txtFile >> snackID;
        if (snackID == -1)
            break;

        txtFile.ignore(); // Ignore newline character
        txtFile.getline(snackName, 100);
        txtFile >> snackType;

        // Write snack details to binary file
        binFile.write(reinterpret_cast<const char*>(&snackID), sizeof(int));
        binFile.write(snackName, strlen(snackName) + 1); // +1 for null terminator
        binFile.write(reinterpret_cast<const char*>(&snackType), sizeof(char));

        // Read and write ingredient details
        while (true) {
            txtFile >> ingredient.id;
            if (ingredient.id == -1)
                break;
            txtFile >> ingredient.kcal;
            binFile.write(reinterpret_cast<const char*>(&ingredient), sizeof(Ingredient));
        }
    }

    txtFile.close();
    binFile.close();
}

int main() {
    writeToBinaryFile("snack.bin");
    return 0;
}


#include <iostream>
#include <fstream>

using namespace std;

struct Ingredient {
    int id;
    int kcal;
};

void seekAndRead() {
    ifstream binFile("snack.bin", ios::binary);

    if (!binFile.is_open()) {
        cerr << "Error: Unable to open binary file." << endl;
        return;
    }

    binFile.seekg(-sizeof(Ingredient), ios::end); // Seek to the second last Ingredient
    Ingredient ingredient;
    binFile.read(reinterpret_cast<char*>(&ingredient), sizeof(Ingredient));

    cout << "Ingredient ID: " << ingredient.id << ", Calories: " << ingredient.kcal << endl;

    binFile.close();
}

int main() {
    seekAndRead();
    return 0;
}
