#include <iostream>
#include <cstring>
using namespace std;

void longestSequence(char str[]) {
    int len = strlen(str);
    if (len == 0) {
        cout << "The string is empty." << endl;
        return;
    }
    char maxChar = str[0];
    int maxCount = 1;
    int currentCount = 1;
    for (int i = 1; i < len; i++) {
        if (str[i] == str[i - 1]) {
            currentCount++;
            if (currentCount > maxCount) {
                maxCount = currentCount;
                maxChar = str[i];
            }
        } else {
            currentCount = 1;
        }
    }
    cout << "Length of the longest sequence: " << maxCount << ", formed by the letter '" << maxChar << "'" << endl;
}

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin >> str;
    longestSequence(str);
    return 0;
}
