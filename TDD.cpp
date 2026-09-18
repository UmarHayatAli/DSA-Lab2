#include <iostream>
#include <cassert>
using namespace std;

// The Function for text xheck
bool isSorted(const int *arr, const int size) {
    if (size <= 1) return true; 

    for (int i = 0; i < size - 1; i++) {
        // The intentional bug: this will fail on duplicate numbers
        if (arr[i] >= arr[i + 1]) { 
            return false;
        }
    }
    return true;
}

// 1. Sorted Array test
void testSortedArray() {
    int arr[] = {1, 2, 3, 4, 5};
    assert(isSorted(arr, 5) == true); 
}

// 2nd test Unsorted Array
void testUnsortedArray() {
    int arr[] = {1, 4, 3, 5, 6};
    assert(isSorted(arr, 5) == false); 
}

// 3. Duplicate Values
void testDuplicateValues() {
    int arr[] = {1, 2, 2, 3, 5};
    assert(isSorted(arr, 5) == true); 
}

// 4. Single Element
void testSingleElement() {
    int arr[] = {42};
    assert(isSorted(arr, 1) == true); 
}

// 5. Descending Order
void testDescendingArray() {
    int arr[] = {5, 4, 3, 2, 1};
    assert(isSorted(arr, 5) == false); 
}

// 6. Negative Values
void testNegativeValues() {
    int arr[] = {-5, -2, 0, 1, 4};
    assert(isSorted(arr, 5) == true); 
}

// 7. All Identical Elements
void testAllIdenticalElements() {
    int arr[] = {7, 7, 7, 7};
    assert(isSorted(arr, 4) == true); 
}

// 8. The Empty Array
void testEmptyArray() {
    int* arr = nullptr; 
    assert(isSorted(arr, 0) == true); 
}

// 9. The "Late Failure" Test
void testLateFailure() {
    int arr[] = {1, 2, 3, 4, -1};
    assert(isSorted(arr, 5) == false); 
}

int main() {
    // Execute all 9 tests
    testSortedArray();
    testUnsortedArray();
    testDuplicateValues();
    testSingleElement();
    testDescendingArray();
    testNegativeValues();
    testAllIdenticalElements();
    testEmptyArray();
    testLateFailure();
    
    cout << "All 9 tests passed successfully!" << endl;
    return 0;
}