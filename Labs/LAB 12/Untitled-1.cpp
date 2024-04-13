
//Let's go step by step through each of the questions:

//Sorting Algorithms:
////a) Selection Sort:
//Pass 1: [3, 8, 29, 6, 17, 32, 32, 12, 8, 23]
//Pass 2: [3, 6, 29, 8, 17, 32, 32, 12, 8, 23]
//Pass 3: [3, 6, 8, 29, 17, 32, 32, 12, 8, 23]
//Pass 4: [3, 6, 8, 8, 17, 32, 32, 12, 29, 23]
//Pass 5: [3, 6, 8, 8, 12, 32, 32, 17, 29, 23]
//b) Insertion Sort:
//
//Pass 1: [8, 32, 29, 6, 17, 32, 3, 12, 8, 23]
//Pass 2: [8, 29, 32, 6, 17, 32, 3, 12, 8, 23]
//Pass 3: [6, 8, 29, 32, 17, 32, 3, 12, 8, 23]
//Pass 4: [6, 8, 17, 29, 32, 32, 3, 12, 8, 23]
//Pass 5: [6, 8, 17, 29, 32, 32, 3, 12, 8, 23]
//c) Bubble Sort:
//
//Pass 1: [8, 29, 6, 17, 32, 3, 12, 8, 23, 32]
//Pass 2: [8, 6, 17, 29, 3, 12, 8, 23, 32, 32]
//Pass 3: [6, 8, 17, 3, 12, 8, 23, 29, 32, 32]
//Pass 4: [6, 8, 3, 12, 8, 17, 23, 29, 32, 32]
//Pass 5: [6, 3, 8, 8, 12, 17, 23, 29, 32, 32]
//d) If the array was already sorted, both insertion sort and bubble sort would have a time complexity of O(n), making them equally efficient in this case.
//
//Binary Search:

//For an array sorted in descending order:
//First, we compare with the middle element.
//If the middle element is less than the key, we search the left half.
//If the middle element is greater than the key, we search the right half.
//We continue this process until the key is found or the search space is exhausted.
//a) Key: 29
//Comparisons: 3 (Initial comparison with 23, then 12, then 29)
//
//b) Key: 50
//After comparing with 23 (middle element), we realize it's less than 23. Then, the search would go to the left half, and eventually, the search space is exhausted. Thus, 4 comparisons //in total.
//
//Searching and Insertion:
//a) Binary search for 88:
//Number of searches: 5 (initial comparison with 50, then 74, then 87, then 88)

//b) Linear search:
//i) Number of searches: 17 (since it has to go through each element until it finds 88)
//ii) Linear search performs better on a sorted array because it can terminate early once it finds the target value, while in an unsorted array, it has to traverse all elements.

//c) Code segment for modified binary search insertion:

//c

int modBinarySearch(int A[], int numElements, int key) {
    int low = 0;
    int high = numElements - 1;
    int mid;
    
    while (low <= high) {
        mid = (low + high) / 2;
        if (A[mid] == key) {
            // Key found at index mid
            return mid;
        } else if (A[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    // If key is not found, return the index where it should be inserted
    return low;
}