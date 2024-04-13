#include <iostream>

using namespace std;

char binaryToChar(int byte[]) {
    int result = 0;
    for (int i = 0; i < 8; i++) {
        result = result * 2 + byte[i];
    }
    return static_cast<char>(result);
}

int main() {
    int byte[] = {0, 1, 1, 0, 0, 0, 0, 1}; // binary representation of 'a'
    char c = binaryToChar(byte);
    cout << "Character representation of binary is: " << c << endl;
    return 0;
}
