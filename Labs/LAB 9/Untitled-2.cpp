#include <iostream>

using namespace std;

// Function to swap the values stored at two addresses
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int num1, num2;

    // Prompt user to enter two integer values
    cout << "Enter the first integer: ";
    cin >> num1;
    cout << "Enter the second integer: ";
    cin >> num2;

    // Display the values before swapping
    cout << "Before swapping:\n";
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl;

    // Call the swap function to exchange the values
    swap(&num1, &num2);

    // Display the values after swapping
    cout << "\nAfter swapping:\n";
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl;

    return 0;
}
