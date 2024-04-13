#include <iostream>

using namespace std;

void generateAlphabetChart() {
    char letter = 'Z';
    int count = 0;

    while (letter >= 'A') {
        cout << letter << " " << (char)tolower(letter) << " ";
        count++;
        if (count % 8 == 0)
            cout << endl;
        letter--;
    }
}

int main() {
    generateAlphabetChart();
    return 0;
}
