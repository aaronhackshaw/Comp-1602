#include <iostream>

using namespace std;

void drawChars(char c, int n) {
    for (int i = 0; i < n; i++) {
        cout << c;
    }
}

int main() {
    int n;
    // ... (get user input for n)

    // Draw the top triangle
    for (int i = 1; i <= n; i += 2) {
        drawChars(' ', (n - i) / 2);
        drawChars('*', i);
        cout << endl;
    }

    // Draw the trunk
    for (int i = 0; i < 2; i++) {
        drawChars(' ', (n - 3) / 2);
        drawChars('*', 3);
        cout << endl;
    }

    return 0;
}
