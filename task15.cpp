#include <iostream>
using namespace std;

int sorted(int a[], int size, int num_min = 0, int c = 0) {
    if (a[c] > a[num_min]) {
        num_min = c;
    }
    if (c == size - 1) {
        return a[num_min];
    }
    return sorted(a,size,num_min,c + 1);
}

int main() {
    int a[] = {4,9,1,7,3};
    int size = std::size(a);
    int result = sorted(a,size);
    cout << result;
}