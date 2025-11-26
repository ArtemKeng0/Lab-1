#include <iostream>
using namespace std;

// Merge two sorted subarrays
/**
 * @brief Merges two sorted subarrays into one sorted array.
 * * This function performs the core merge step of the merge sort algorithm.
 * * @param arr The array containing the subarrays to be merged.
 * @param l The starting index of the first subarray.
 * @param m The ending index of the first subarray (mid-point).
 * @param r The ending index of the second subarray.
 */
void mergeArrays(int arr[], int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;

    int *L = new int[n1];
    int *R = new int[n2];

    for (int i = 0; i < n1; i++) L[i] = arr[l + i];
    for (int i = 0; i < n2; i++) R[i] = arr[m + 1 + i];

    int i = 0, j = 0, k = l;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) arr[k++] = L[i++];
        else arr[k++] = R[j++];
    }

    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];

    delete[] L;
    delete[] R;
}

// Multi-phase merge sort
/**
 * @brief Performs Multi-Phase (Iterative) Merge Sort on the given array.
 * * This bottom-up approach iteratively merges runs of increasing size (1, 2, 4, ...).
 * It has a time complexity of O(n log n).
 *
 * @param arr The array to be sorted.
 * @param n The number of elements in the array.
 */
void multiPhaseMergeSort(int arr[], int n) {
    int size = 1;

    while (size < n) {
        int left = 0;

        while (left < n) {
            int mid = left + size - 1;
            int right = left + 2 * size - 1;

            if (mid >= n) break;
            if (right >= n) right = n - 1;

            mergeArrays(arr, left, mid, right);
            left += 2 * size;
        }

        size *= 2;
    }
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int *arr = new int[n];

    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    multiPhaseMergeSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";

    delete[] arr;
    return 0;
}
