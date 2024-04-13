#include <iostream>

using namespace std;

int main() {
    char array6[5][5];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            array6[i][j] = ' ';
        }
    }

    for (int i = 0; i < 5; i++) {
        array6[i][i] = '7';
    }

    char temp;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 5; j++) {
            temp = array6[i][j];
            array6[i][j] = array6[4 - i][j];
            array6[4 - i][j] = temp;
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << array6[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
