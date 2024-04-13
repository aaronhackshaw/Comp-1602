#include <iostream>
#include <fstream>
#include <cctype>

using namespace std;

bool isVowel(char c) {
    c = tolower(c); // Convert to lowercase for easy comparison
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main() {
    char character;
    cout << "Enter a character: ";
    cin >> character;

    if (isVowel(character))
        cout << "Is a vowel" << endl;
    else
        cout << "Is not a vowel" << endl;

    return 0;
}
