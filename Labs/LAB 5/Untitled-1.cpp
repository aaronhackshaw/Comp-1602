#include <iostream>
#include <cstring>

using namespace std;

char findMiddle(const char* str) {
    int length = strlen(str);
    if (length % 2 == 0) {
        return str[length / 2 - 1];
    } else {
        return str[length / 2];
    }
}

int main() {
    char input[100];
    cout << "Enter a C-string: ";
    cin.getline(input, 100);
    cout << "Middle character: " << findMiddle(input) << endl;

    return 0;
}
