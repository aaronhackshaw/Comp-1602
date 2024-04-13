#include <iostream>

using namespace std;

int main() {
    char array4[5][5];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            array4[i][j] = ' ';
        }
    }

    for (int i = 0; i < 5; i++) {
        array4[i][i] = '7';
    }

    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            array4[i][j] = '^';
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << array4[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
