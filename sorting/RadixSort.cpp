#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxVal(const vector<int>& a) {
    return *max_element(a.begin(), a.end());
}

void radixSort(vector<int>& a, int exp, int n) {
    vector<int> output(n);
    int count[10] = {0};

    for (int i = 0; i < n; i++) {
        int digit = (a[i] / exp) % 10;
        count[digit]++;
    }

    for (int i = 1; i < 10; i++) {
        count[i] = count[i] + count[i - 1];
    }

    for (int i = n - 1; i >= 0; i--) {
        int digit = (a[i] / exp) % 10;
        output[count[digit] - 1] = a[i];
        count[digit]--;
    }

    for (int i = 0; i < n; i++) {
        a[i] = output[i];
    }
}

void radixSort(vector<int>& a, int n) {
    int maxNum = maxVal(a);
    for (int exp = 1; maxNum / exp > 0; exp *= 10) {
        radixSort(a, exp, n);
    }
}

void printArray(vector<int>& a, int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> arr(n);

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Original array: ";
    printArray(arr, n);
    radixSort(arr, n);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}
// complexity: O(n*d){avg} O(n){best} O(n^2){worst}