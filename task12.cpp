#include <iostream>
using namespace std;

int largest_of_array(int a[], int size, int num_max = 0,int c = 0) {
    if (a[c] > a[num_max]) {
        num_max = c;
    }
    if (c == size - 1) {
        return a[num_max];
    }
    return largest_of_array(a,size,num_max,c + 1);
}

int main() {
    int a[] = {4,9,1,7,3};
    int size = std::size(a);
    int result = largest_of_array(a,size);
    cout << result;
}