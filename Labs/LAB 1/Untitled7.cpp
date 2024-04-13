#include <iostream>

using namespace std;

int larger(int x, int y) {
  return (x > y) ? x : y;  // Use a conditional expression for conciseness
}

int largest(int x, int y, int z) {
  return larger(larger(x, y), z);  // Call larger twice to find the largest
}

int main() {
  int num1, num2, num3;

  cout << "Enter three integers: ";
  cin >> num1 >> num2 >> num3;

  int largestNum = largest(num1, num2, num3);

  cout << "The largest number is: " << largestNum << endl;

  return 0;
}
