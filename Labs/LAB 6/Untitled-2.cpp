#include <iostream>
#include <cstring>
using namespace std;

bool isIousWord(char str[]) {
    int len = strlen(str);
    if (len < 4) return false; // Words ending with "ious" should have at least 4 characters
    return (tolower(str[len - 1]) == 's' && tolower(str[len - 2]) == 'u' && tolower(str[len - 3]) == 'o' && tolower(str[len - 4]) == 'i');
}

int main() {
    char word[100];
    cout << "Enter a word: ";
    cin >> word;
    if (isIousWord(word))
        cout << "The word is an ious word." << endl;
    else
        cout << "The word is not an ious word." << endl;
    return 0;
}
