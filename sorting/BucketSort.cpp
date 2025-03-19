#include <iostream>
#include <vector>
#include <algorithm> // For std::sort
using namespace std;

// Function to perform bucket sort
void bucketSort(float arr[], int n) {
    // 1. Create empty buckets
    vector<float> buckets[n];

    // 2. Insert elements into their respective buckets
    for (int i = 0; i < n; i++) {
        int bucketIndex = n * arr[i]; // Index in the bucket
        buckets[bucketIndex].push_back(arr[i]);
    }

    // 3. Sort individual buckets
    for (int i = 0; i < n; i++) {
        sort(buckets[i].begin(), buckets[i].end());
    }

    // 4. Concatenate all buckets into arr[]
    int index = 0;
    for (int i = 0; i < n; i++) {
        for (size_t j = 0; j < buckets[i].size(); j++) {
            arr[index++] = buckets[i][j];
        }
    }
}

// Utility function to print an array
void printArray(float arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    float arr[] = {0.897, 0.565, 0.656, 0.1234, 0.665, 0.3434};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, n);

    bucketSort(arr, n);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}

//algorithm
//time complexity = O(n) {avg and best} O(n^2) for worst
//  bucketSort(a,n)
//  take another array b of size n
//  1) for i from 0 to n-1, insert a[i] into b[a[i]*10]
//  2) for i from 0 to n-1, sort b[i] using insertion Sort
//  3) concatenate elements in b[i] in order for i from 0 to n-1