#include <iostream>
using namespace std;

void printNumberIncrease(int n) {
    if (n == 0) {
        return;
    }
    printNumberIncrease(n-1);
    cout << n << ' ';
}

int main() {
    int n;
    cin >> n;
    printNumberIncrease(n);
    return 0;
}