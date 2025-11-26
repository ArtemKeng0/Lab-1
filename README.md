# Lab-1
Lab 1 software development tools  Shalkin Artem IPS-21  

Lab-2
Lab 2 software development tools  Shalkin Artem IPS-21
##Documentation
/**
 * @file main.cpp
 * @brief Main application file containing the Iterative Merge Sort implementation.
 */
// ...

/**
 * @brief Merges two sorted subarrays into one sorted array.
 * * This function performs the core merge step of the merge sort algorithm.
 * * @param arr The array containing the subarrays to be merged.
 * @param l The starting index of the first subarray.
 * @param m The ending index of the first subarray (mid-point).
 * @param r The ending index of the second subarray.
 */
void mergeArrays(int arr[], int l, int m, int r) {
    // ...
}

/**
 * @brief Performs Multi-Phase (Iterative) Merge Sort on the given array.
 * * This bottom-up approach iteratively merges runs of increasing size (1, 2, 4, ...).
 * It has a time complexity of O(n log n).
 *
 * @param arr The array to be sorted.
 * @param n The number of elements in the array.
 * @example
 * int data[] = {5, 2, 9, 1};
 * multiPhaseMergeSort(data, 4); 
 * // Result: data becomes {1, 2, 5, 9}
 */
void multiPhaseMergeSort(int arr[], int n) {
    // ...
}
// ...
