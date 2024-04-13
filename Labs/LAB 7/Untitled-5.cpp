#include <iostream>
#include <cstring>
#include <cstdlib>
#include <ctime>

using namespace std;

bool split(char str1[], char str2[], char str3[], int n) {
    int len = strlen(str1);
    if (n < 0 || n >= len) {
        return false;
    }
    strncpy(str2, str1, n);
    str2[n] = '\0';
    strcpy(str3, &str1[n]);
    return true;
}

int main() {
    char str1[100], str2[100], str3[100];
    cout << "Enter a string: ";
    cin.getline(str1, 100);
    srand(time(NULL));
    int splitPos = rand() % (strlen(str1) + 1);
    if (split(str1, str2, str3, splitPos)) {
        cout << "Split successful:" << endl;
        cout << "First part: " << str2 << endl;
        cout << "Second part: " << str3 << endl;
    } else {
        cout << "Split unsuccessful!" << endl;
    }
    return 0;
}
