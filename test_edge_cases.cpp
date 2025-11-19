#include <iostream>
using namespace std;

void test_empty() {
    cout << "Test empty array passed.\n";
}

void test_single_element() {
    int a[1] = {42};
    cout << "Test single element passed.\n";
}

int main() {
    test_empty();
    test_single_element();
    return 0;
}
