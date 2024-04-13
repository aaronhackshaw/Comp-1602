#include <iostream>

using namespace std;

// Binary search function
int binarySearch(string A[], int size, string target) {
    int low = 0;
    int high = size - 1;
    int mid;

    while (low <= high) {
        mid = low + (high - low) / 2;
        if (A[mid] == target) {
            return mid; // Return the index of the target if found
        } else if (A[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1; // Return -1 if target not found
}

int main() {
    // Question 3
    string A[] = {
        "A", "Danny", "Brandon", "Barry", "Yara", "Mary",
        "Shaun", "Amelia", "Carrie", "Xia", "Carson", "Zack"
    };
    int size_A = sizeof(A) / sizeof(A[0]);

    // a) Trace table for binary search for "Mary"
    int low = 0, high = size_A - 1;
    int mid;
    while (low <= high) {
        mid = low + (high - low) / 2;
        if (A[mid] == "Mary") {
            cout << "Mary found at index: " << mid << endl;
            break;
        } else if (A[mid] < "Mary") {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    if (low > high) {
        cout << "Mary not found." << endl;
    }

    // b) Comparisons made before "Mary" was found
    int comparisons = 0;
    low = 0;
    high = size_A - 1;
    while (low <= high) {
        comparisons++;
        mid = low + (high - low) / 2;
        if (A[mid] == "Mary") {
            cout << "Comparisons made before Mary was found: " << comparisons << endl;
            break;
        } else if (A[mid] < "Mary") {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return 0;
}
