#include <iostream>

using namespace std;

int sumSqs(int x) {
  // Use the formula for the sum of squares from 1 to x
  return x * (x + 1) * (2 * x + 1) / 6;
}

int main() {
  int start = 1, end = 20;

  int totalSum = 0;
  for (int x = start; x <= end; x++) {
    int sum = sumSqs(x);
    totalSum += sum;
    cout << "Sum of squares from 1 to " << x << ": " << sum << endl;
  }

  cout << "Total sum of squares from 1 to 20: " << totalSum << endl;

  return 0;
}
