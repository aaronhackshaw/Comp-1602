#include <iostream>
#include <cstring>
using namespace std;

bool doubleLetter(char str[], char c) {
    int len = strlen(str);
    for (int i = 0; i < len - 1; i++) {
        if (str[i] == c && str[i + 1] == c) {
            return true;
        }
    }
    return false;
}

int main() {
    char str[100];
    char c;
    cout << "Enter a string: ";
    cin >> str;
    cout << "Enter a character: ";
    cin >> c;
    if (doubleLetter(str, c))
        cout << "The character '" << c << "' appears consecutively in the string." << endl;
    else
        cout << "The character '" << c << "' does not appear consecutively in the string." << endl;
    return 0;
}
