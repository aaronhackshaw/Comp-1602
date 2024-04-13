#include <iostream>
#include <cstring>

using namespace std;

int hashCode(char str[]) {
    int sum = 0;
    for (int i = 0; str[i] != '\0'; ++i) {
        sum += static_cast<int>(str[i]);
    }
    return sum % 997;
}

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);
    cout << "Hash code: " << hashCode(str) << endl;
    return 0;
}
