#include <iostream>

using namespace std;

int main() {
    char array3[5][5];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            array3[i][j] = ' ';
        }
    }

    for (int i = 0; i < 5; i++) {
        array3[i][i] = '7';
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < i; j++) {
            array3[i][j] = '@';
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << array3[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
