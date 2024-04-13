#include <iostream>

using namespace std;

void printStars(int n) {
  for (int i = 0; i < n; ++i) {
    cout << "*";
  }
}

int main() {
  int rows = 10;

  // Print the pyramid shape
  for (int i = 1; i <= rows; ++i) {
    printStars(i);
    cout << endl;
  }

  return 0;
}
