#include <iostream>
#include <cstring>

using namespace std;

void reverse(const char str1[], char str2[]) {
    int length = strlen(str1);
    for (int i = 0; i < length; ++i) {
        str2[i] = str1[length - i - 1];
    }
    str2[length] = '\0';
}

bool isPalindrome(const char word[]) {
    char reversed[100]; // Assuming maximum length for the reversed string
    reverse(word, reversed);
    return strcmp(word, reversed) == 0;
}

int main() {
    const int NUM_STRINGS = 5;
    char strings[NUM_STRINGS][100];

    cout << "Enter five strings:" << endl;
    for (int i = 0; i < NUM_STRINGS; ++i) {
        cin >> strings[i];
    }

    cout << "Palindrome check:" << endl;
    for (int i = 0; i < NUM_STRINGS; ++i) {
        if (isPalindrome(strings[i])) {
            cout << strings[i] << " is a palindrome." << endl;
        } else {
            cout << strings[i] << " is not a palindrome." << endl;
        }
    }

    return 0;
}
