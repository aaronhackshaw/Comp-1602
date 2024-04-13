#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

void removeNonLetters(char str[]) {
    int len = strlen(str);
    int j = 0;
    for (int i = 0; i < len; i++) {
        if (isalpha(str[i])) {
            str[j++] = tolower(str[i]);
        }
    }
    str[j] = '\0';
}

bool isPalindrome(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            return false;
        }
    }
    return true;
}

int main() {
    ifstream inputFile("words.txt");
    if (!inputFile) {
        cerr << "Failed to open the file." << endl;
        return 1;
    }
    char word[80];
    cout << "Word/Phrase\tIs Palindrome?" << endl;
    cout << "--------------------------------" << endl;
    while (inputFile.getline(word, 80)) {
        if (strcmp(word, "END") == 0) {
            break;
        }
        removeNonLetters(word);
        cout << word << "\t\t";
        if (isPalindrome(word))
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
    }
    inputFile.close();
    return 0;
}
