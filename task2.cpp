#include <iostream>
using namespace std;

void printNumberDecrease(int n) {
    if (n == 0) {
        return;
    }
    cout << n << ' ';
    printNumberDecrease(n-1);
}

int main() {
    int n;
    cin >> n;
    printNumberDecrease(n);
    return 0;
}