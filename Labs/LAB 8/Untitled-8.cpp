#include <cstring>
#include <ctype.h>

void extractIntStr(const char* s, char* intStr) {
    int j = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            intStr[j++] = s[i];
        }
    }
    intStr[j] = '\0'; // Null-terminate the intStr
}

void reverse(char s[]) {
    int length = strlen(s);
    for (int i = 0; i < length / 2; i++) {
        char temp = s[i];
        s[i] = s[length - i - 1];
        s[length - i - 1] = temp;
    }
}

void intToString(int n, char s[]) {
    int i = 0;
    do {
        s[i++] = n % 10 + '0';
    } while ((n /= 10) > 0);

    s[i] = '\0';
    reverse(s);
}

char encrypt(char ch, int y) {
    if (isalpha(ch)) {
        char base = islower(ch) ? 'a' : 'A';
        return ((ch - base + y) % 26) + base;
    }
    return ch; // Non-letters remain unchanged
}
