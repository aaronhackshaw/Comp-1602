#include <iostream>

using namespace std;

void charToBinary(char c, int byte[]) {
    for (int i = 7; i >= 0; i--) {
        byte[i] = c % 2;
        c /= 2;
    }
}

int main() {
    char c = 'a';
    int byte[8];
    charToBinary(c, byte);

    cout << "Binary representation of " << c << " is: ";
    for (int i = 0; i < 8; i++) {
        cout << byte[i];
    }
    cout << endl;

    return 0;
}
