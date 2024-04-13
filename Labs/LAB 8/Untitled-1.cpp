#include <iostream>

using namespace std;

int main() {
    char array1[10][10];

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            array1[i][j] = ' ';
        }
    }

    for (int i = 0; i < 10; i++) {
        array1[0][i] = '%';
        array1[9][i] = '%';
        array1[i][0] = '%';
        array1[i][9] = '%';
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cout << array1[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
