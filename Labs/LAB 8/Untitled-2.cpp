#include <iostream>

using namespace std;

int main() {
    char array2[5][5];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            array2[i][j] = ' ';
        }
    }

    for (int i = 0; i < 5; i++) {
        array2[i][i] = '7';
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << array2[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
