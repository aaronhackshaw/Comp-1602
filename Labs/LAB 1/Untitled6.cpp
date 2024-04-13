#include <iostream>

using namespace std;

bool isVowel(char c) {
  return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main() {
  char userChar;

  cout << "Enter a character: ";
  cin >> userChar;

  if (isVowel(userChar)) {
    cout << userChar << " is a vowel." << endl;
  } else {
    cout << userChar << " is not a vowel." << endl;
  }

  return 0;
}
