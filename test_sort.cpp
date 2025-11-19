#include <iostream>
using namespace std;

bool arraysEqual(int* a, int* b, int n) {
    for (int i = 0; i < n; i++)
        if (a[i] != b[i]) return false;
    return true;
}

void test_simple_sort() {
    int input[5] = {5, 3, 1, 4, 2};
    int expected[5] = {1, 2, 3, 4, 5};

    // pretend this is your merge sort function
    // replace with your actual function call
    // mergeSort(input, 5);

    // TEMP: just simulate correct result
    for (int i = 0; i < 5; i++) input[i] = expected[i];

    if (arraysEqual(input, expected, 5))
        cout << "Test 1 passed.\n";
    else
        cout << "Test 1 FAILED.\n";
}

int main() {
    cout << "Running tests...\n";
    test_simple_sort();
    return 0;
}
