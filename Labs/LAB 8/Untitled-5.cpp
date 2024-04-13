#include <iostream>

using namespace std;

int main() {
    char array5[5][5];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            array5[i][j] = ' ';
        }
    }

    for (int i = 0; i < 5; i++) {
        array5[i][i] = '7';
    }

    char temp;
    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            temp = array5[i][j];
            array5[i][j] = array5[j][i];
            array5[j][i] = temp;
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << array5[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
