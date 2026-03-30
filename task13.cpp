#include <iostream>
using namespace std;

int count_target(int a[], int size, int target, int c = 0, int count = 0) {
    if (a[c] == target) {
        count++;
    }
    if (c == size - 1) {
        return count;
    }
    return count_target(a,size,target,c+1,count);
}

int main() {
    int a[] = {1,2,3,2,2,5};
    int target = 2;
    int size = std::size(a);
    int result = count_target(a,size,target);
    cout << result;
}