#include <iostream>
using namespace std;

int largest_of_array(int a[], int size) {
    int num_max = 0;
    int count = 0;
    if (a[count] > a[num_max]) {
        num_max = count;
    }
    int temp = 0;
}

int main() {
    int a[] = {1,2,3,4};
    int size = std::size(a);
    int result = largest_of_array(a,size);
    cout << result;
}