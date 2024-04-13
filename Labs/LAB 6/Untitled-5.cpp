#include <iostream>
#include <cstring>
using namespace std;

void removeNonLetters(char str[]) {
    int len = strlen(str);
    int j = 0;
    for (int i = 0; i < len; i++) {
        if (isalpha(str[i])) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);
    removeNonLetters(str);
    cout << "String after removing non-letters: " << str << endl;
    return 0;
}
