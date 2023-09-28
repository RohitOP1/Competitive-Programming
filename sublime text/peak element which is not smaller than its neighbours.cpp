#include <bits/stdc++.h>
using namespace std;

int findPeakElement(int arr[], int arrlength) { // Added 'int' before 'arrlength'
    if (arrlength == 1)
        return arr[0]; // Return the element if there's only one element in the array
    if (arr[0] >= arr[1])
        return arr[0];
    if (arr[arrlength - 1] >= arr[arrlength - 2])
        return arr[arrlength - 1];

    // Find the peak in the remaining array elements
    for (int i = 1; i < arrlength - 1; i++) {
        // Comparing current element with neighbors
        if (arr[i] >= arr[i - 1] &&
            arr[i] >= arr[i + 1])
            return arr[i];
    }
    return arr[0];
}

int main() {
    int arr[] = {1, 3, 20, 4, 1, 0};
    int arrlength = sizeof(arr) / sizeof(arr[0]);
    cout << "Peak element: " << findPeakElement(arr, arrlength) << endl;
    return 0;
}
