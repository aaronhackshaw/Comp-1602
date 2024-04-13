#include <iostream>
#include <fstream>
#include <cctype>

using namespace std;

void countCharacters(ifstream& file) {
    char ch;
    int digits = 0, lowercase = 0, uppercase = 0, others = 0;

    while (file.get(ch)) {
        if (isdigit(ch))
            digits++;
        else if (islower(ch))
            lowercase++;
        else if (isupper(ch))
            uppercase++;
        else
            others++;
    }

    cout << "Digits: " << digits << endl;
    cout << "Lowercase letters: " << lowercase << endl;
    cout << "Uppercase letters: " << uppercase << endl;
    cout << "Other characters: " << others << endl;
}

int main() {
    ifstream input("input.txt");
    if (!input) {
        cerr << "Error opening file." << endl;
        return 1;
    }

    countCharacters(input);

    input.close();
    return 0;
}
