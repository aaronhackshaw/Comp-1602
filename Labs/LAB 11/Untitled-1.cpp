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

// Sequential search function
int sequentialSearch(int nums[], int size, int target) {
    for (int i = 0; i < size; ++i) {
        if (nums[i] == target) {
            return i; // Return the index of the target if found
        }
    }
    return -1; // Return -1 if target not found
}

int main() {
    int nums[] = {
        0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11,
        23, 36, 45, 55, 68, 79, 81, 90, 102, 116, 124, 135
    };
    int size = sizeof(nums) / sizeof(nums[0]);
    
    // a) Searching for 90
    int index_binary_90 = binarySearch(nums, size, 90);
    int index_sequential_90 = sequentialSearch(nums, size, 90);
    cout << "Binary Search for 90: " << index_binary_90 << endl;
    cout << "Sequential Search for 90: " << index_sequential_90 << endl;
    
    // b) Searching for 60
    int index_binary_60 = binarySearch(nums, size, 60);
    int index_sequential_60 = sequentialSearch(nums, size, 60);
    cout << "Binary Search for 60: " << index_binary_60 << endl;
    cout << "Sequential Search for 60: " << index_sequential_60 << endl;
    
    // c) Sequential search would require more comparisons if the array is not sorted.
    
    // d) Binary search is more efficient than sequential search for sorted arrays.
    
    // e) No changes needed for binary search if the array is sorted in descending order.
    
    return 0;
}
