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

bool isAnagram(char str1[], char str2[]) {
    int count1[26] = {0};
    int count2[26] = {0};
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len1 != len2)
        return false;

    for (int i = 0; i < len1; i++) {
        count1[str1[i] - 'a']++;
        count2[str2[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        if (count1[i] != count2[i])
            return false;
    }

    return true;
}

int main() {
    ifstream inputFile("wordpairs.txt");
    if (!inputFile) {
        cerr << "Failed to open the file." << endl;
        return 1;
    }
    char str1[80], str2[80];
    cout << "Word/Phrase 1\tWord/Phrase 2\tAre Anagrams?" << endl;
    cout << "---------------------------------------------" << endl;
    while (inputFile.getline(str1, 80) && inputFile.getline(str2, 80)) {
        if (strcmp(str1, "END") == 0 || strcmp(str2, "END") == 0) {
            break;
        }
        removeNonLetters(str1);
        removeNonLetters(str2);
        cout << str1 << "\t\t" << str2 << "\t\t";
        if (isAnagram(str1, str2))
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
    }
    inputFile.close();
    return 0;
}
