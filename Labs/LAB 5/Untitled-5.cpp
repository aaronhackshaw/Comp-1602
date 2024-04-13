#include <iostream>
#include <cstring>

using namespace std;

int indexOf(const char str[], char c) {
    int length = strlen(str);
    for (int i = 0; i < length; ++i) {
        if (str[i] == c) {
            return i;
        }
    }
    return -1;
}

void intersect(const char s[], const char t[], char u[]) {
    int index = 0;
    int sLength = strlen(s);
    for (int i = 0; i < sLength; ++i) {
        if (indexOf(t, s[i]) != -1 && indexOf(u, s[i]) == -1) {
            u[index++] = s[i];
        }
    }
    u[index] = '\0';
}

int main() {
    const int MAX_LENGTH = 100;
    char s[MAX_LENGTH], t[MAX_LENGTH], u[MAX_LENGTH];

    cout << "Enter first string: ";
    cin.getline(s, MAX_LENGTH);
    cout << "Enter second string: ";
    cin.getline(t, MAX_LENGTH);

    intersect(s, t, u);

    cout << "Intersection: " << u << endl;

    return 0;
}
