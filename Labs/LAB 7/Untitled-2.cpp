#include <iostream>
#include <cstring>

using namespace std;

void removeLeadingSpaces(char str[]) {
    int i = 0;
    while (str[i] == ' ') {
        ++i;
    }
    if (i > 0) {
        strcpy(str, &str[i]);
    }
}

int main() {
    char str[] = " A variable is a named memory location.";
    removeLeadingSpaces(str);
    cout << str << endl;
    return 0;
}
