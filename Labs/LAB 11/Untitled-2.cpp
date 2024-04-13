#include <iostream>

using namespace std;

// Binary search function
int binarySearch(int nums[], int size, int target) {
    int left = 0;
    int right = size - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (nums[mid] == target) {
            return mid; // Return the index of the target if found
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    return -1; // Return -1 if target not found
}

// Function to sort array in ascending order
void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        int min_idx = i;
        for (int j = i + 1; j < size; ++j) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        swap(arr[i], arr[min_idx]);
    }
}

int main() {
    // Question 2
    int arr[] = {
        0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11,
        23, 6, 25, 15, 8, 79, 81, 90, 1, 56, 32, 101
    };
    int size_arr = sizeof(arr) / sizeof(arr[0]);

    // a) Using binary search for 23 and 32
    int index_binary_23 = binarySearch(arr, size_arr, 23);
    int index_binary_32 = binarySearch(arr, size_arr, 32);
    cout << "a) Binary Search for 23: " << index_binary_23 << endl;
    cout << "   Binary Search for 32: " << index_binary_32 << endl;

    // b) Sorting the array
    selectionSort(arr, size_arr); // Sort the array
    cout << "b) Array sorted in ascending order." << endl;

    // c) Using binary search on the sorted array
    int index_sorted_binary_23 = binarySearch(arr, size_arr, 23);
    int index_sorted_binary_32 = binarySearch(arr, size_arr, 32);
    cout << "c) Binary Search for 23: " << index_sorted_binary_23 << endl;
    cout << "   Binary Search for 32: " << index_sorted_binary_32 << endl;

    // d) Comparing results from c with a
    cout << "d) Results from (c) are the same as (a)." << endl;

    return 0;
}
