#include <iostream>
#include <cstring>

using namespace std;

void removeSpaces(char str[]) {
    int i = 0, j = 0;
    bool space = false;
    while (str[i]) {
        if (str[i] != ' ') {
            str[j++] = str[i++];
            space = false;
        } else {
            if (!space) {
                str[j++] = str[i++];
                space = true;
            } else {
                ++i;
            }
        }
    }
    str[j] = '\0';
}

int main() {
    char str[] = " A variable   is  a named   memory location. ";
    removeSpaces(str);
    cout << str << endl;
    return 0;
}
