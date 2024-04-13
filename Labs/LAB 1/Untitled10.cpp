#include <iostream>

using namespace std;

int qualityPoints(int mark) {
  if (mark >= 75) {
    return 4;
  } else if (mark >= 60) {
    return 3;
  } else if (mark >= 50) {
    return 2;
  } else {
    return 0;
  }
}

int main() {
  int mark;
  cout << "Enter marks (-1 to terminate): ";

  while (cin >> mark && mark != -1) {
    int points = qualityPoints(mark);
    cout << "Quality points for " << mark << ": " << points << endl;
  }

  return 0;
}
