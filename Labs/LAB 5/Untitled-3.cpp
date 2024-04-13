#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

char upperToLower(char c) {
    if (isalpha(c)) {
        return tolower(c);
    } else {
        return c;
    }
}

bool isEqual(char str1[], char str2[]) {
    return strcmp(str1, str2) == 0;
}

int main() {
    char str1[100], str2[100];
    cout << "Enter first string: ";
    cin >> str1;
    cout << "Enter second string: ";
    cin >> str2;
    for (int i = 0; str1[i] != '\0'; ++i) {
        str1[i] = upperToLower(str1[i]);
    }
    for (int i = 0; str2[i] != '\0'; ++i) {
        str2[i] = upperToLower(str2[i]);
    }
    if (isEqual(str1, str2)) {
        cout << "Strings are equal." << endl;
    } else {
        cout << "Strings are not equal." << endl;
    }

    return 0;
}
