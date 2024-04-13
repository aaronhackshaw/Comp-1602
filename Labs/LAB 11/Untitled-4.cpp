#include <iostream>

using namespace std;

// Function to check if array is top heavy
bool topHeavy(int m[][3], int numRows, int numCols) {
    if (numRows % 2 != 0) {
        return false; // Array must have even number of rows
    }
    
    int top_half_non_zero = 0;
    int bottom_half_non_zero = 0;
    
    for (int i = 0; i < numRows / 2; ++i) {
        for (int j = 0; j < numCols; ++j) {
            if (m[i][j] != 0) {
                top_half_non_zero++;
            }
        }
    }
    
    for (int i = numRows / 2; i < numRows; ++i) {
        for (int j = 0; j < numCols; ++j) {
            if (m[i][j] != 0) {
                bottom_half_non_zero++;
            }
        }
    }
    
    return top_half_non_zero > bottom_half_non_zero;
}

int main() {
    // Example of topHeavy function
    int m[4][3] = {
        {0, 1, 2},
        {9, 1, 0},
        {8, 0, 2},
        {0, 0, 3}
    };
    cout << "Is m top heavy? " << (topHeavy(m, 4, 3) ? "Yes" : "No") << endl;

    return 0;
}
