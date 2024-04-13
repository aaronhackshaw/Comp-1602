#include <iostream>

using namespace std;

int getPosition(char c) {
    if (isalpha(c)) {
        c = tolower(c);
        return c - 'a' + 1;
    } else {
        return 0;
    }
}

int main() {
    cout << "Position of 'A': " << getPosition('A') << endl; // Output: 1
    cout << "Position of 'a': " << getPosition('a') << endl; // Output: 1
    cout << "Position of '#': " << getPosition('#') << endl; // Output: 0
    cout << "Position of 'Y': " << getPosition('Y') << endl; // Output: 25
    return 0;
}
