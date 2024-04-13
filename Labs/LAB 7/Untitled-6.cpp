#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

bool isVowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

void pigLatin(char str1[], char str2[]) {
    int len = strlen(str1);
    if (isVowel(str1[0])) {
        strcpy(str2, str1);
        strcat(str2, "way");
    } else {
        strcpy(str2, &str1[1]);
        strncat(str2, str1, 1);
        strcat(str2, "ay");
    }
}

int main() {
    char str1[100], str2[100];
    cout << "Enter a word: ";
    cin >> str1;
    pigLatin(str1, str2);
    cout << "Pig Latin: " << str2 << endl;
    return 0;
}
