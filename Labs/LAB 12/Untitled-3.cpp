#include <iostream>
#include <string>

using namespace std;

struct Device {
    string name;
    string brand;
    double price;
    char tier;
};

int findDeviceByPrice(Device inventory[], int size, double price) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2; // Calculate mid index to avoid overflow

        if (inventory[mid].price == price) {
            return mid; // Device with target price found
        } else if (inventory[mid].price < price) {
            low = mid + 1; // Search right half
        } else {
            high = mid - 1; // Search left half
        }
    }

    return -1; // Device with target price not found
}

int main() {
    // Example usage
    Device inventory[5] = {
        {"Phone", "Brand1", 200.0, 'A'},
        {"Tablet", "Brand2", 300.0, 'B'},
        {"Laptop", "Brand3", 500.0, 'C'},
        {"Smartwatch", "Brand4", 150.0, 'A'},
        {"Speaker", "Brand5", 100.0, 'B'}
    };

    double targetPrice = 300.0;
    int index = findDeviceByPrice(inventory, 5, targetPrice);

    if (index != -1) {
        cout << "Device with price " << targetPrice << " found at index " << index << endl;
    } else {
        cout << "Device with price " << targetPrice << " not found." << endl;
    }

    return 0;
}


//b) Main differences between binary search and linear search:
//
//Time Complexity:
//
//Binary search has a time complexity of O(log n) where n is the number of elements in the array. It efficiently reduces the search space by half with each comparison.
//Linear search has a time complexity of O(n), where n is the number of elements. It sequentially checks each element in the array until the target is found or the end of the array is reached.
//Approach:
//
//Binary search requires the array to be sorted in ascending (or descending) order. It works by repeatedly dividing the search interval in half until the target is found or the interval becomes empty.
//Linear search does not require the array to be sorted. It searches for the target by checking each element one by one from the beginning to the end of the array.

//In the foo() method:
//
//b is declared as a pointer to an integer.
//b is assigned the address of variable a.
//The value at the address b is incremented by 45.
//It prints the value of a and the value pointed to by b.
//It returns the value of a.
//In the main() method:
//
//Variable a is initialized to 30.
//foo() is called with a as an argument, and the return value is assigned to variable b.
//It prints the value of a and b.
//The program exits with a return value of 0.
//So, the output would be:
//
//a-75 and *b-75
//a-30 and b=30
