#include <iostream>
#include <cstring>

using namespace std;

void intToString(int n, char str[]) {
    int i = 0;
    while (n != 0) {
        int digit = n % 10;
        str[i++] = digit + '0';
        n /= 10;
    }
    str[i] = '\0';
}

int main() {
    int numbers[] = {5, 90, 125};

    for (int i = 0; i < 3; ++i) {
        char str[20]; // Assuming maximum 20 characters for each number
        intToString(numbers[i], str);
        cout << "Number: " << numbers[i] << ", String: " << str << endl;
    }

    return 0;
}
