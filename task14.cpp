#include <iostream>
using namespace std;

void find_target(int a[], int size, int target, int c = 0) {
    if (a[c] == target) {
        cout << "Found";
        return;
    }
    if (c == size - 1) {
        return;
    }
    return find_target(a,size,target,c+1);
}

int main() {
    int a[] = {4,7,1,9,3};
    int target = 9;
    int size = std::size(a);
    find_target(a,size,target);
}