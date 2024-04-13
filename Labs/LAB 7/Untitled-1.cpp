#include <iostream>
#include <cstring>

using namespace std;

void removeTrailingSpaces(char str[]) {
    int len = strlen(str);
    for (int i = len - 1; i >= 0; --i) {
        if (str[i] == ' ') {
            str[i] = '\0';
        } else {
            break;
        }
    }
}

int main() {
    char str[] = "A variable is a named memory location. ";
    removeTrailingSpaces(str);
    cout << str << endl;
    return 0;
}
