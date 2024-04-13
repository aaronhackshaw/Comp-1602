#include <iostream>
#include <cstring>
using namespace std;

int matchingLetters(char word1[], char word2[]) {
    int count = 0;
    int len1 = strlen(word1);
    int len2 = strlen(word2);
    int minLen = min(len1, len2);
    for (int i = 0; i < minLen; i++) {
        if (tolower(word1[i]) == tolower(word2[i])) {
            count++;
        }
    }
    return count;
}

int main() {
    char word1[100], word2[100];
    cout << "Enter first word: ";
    cin >> word1;
    cout << "Enter second word: ";
    cin >> word2;
    cout << "Number of matching letters: " << matchingLetters(word1, word2) << endl;
    return 0;
}
