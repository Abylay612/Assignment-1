#include <iostream>
using namespace std;

int sum_of_array(int a[], int size) {
    if (size == 0) {
        return 0;
    }
    return a[size-1] + sum_of_array(a,size-1);
}

int main() {
    int a[] = {1,2,3,4};
    int size = std::size(a);
    int result = sum_of_array(a,size);
    cout << result;
}