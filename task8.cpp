#include <iostream>
using namespace std;

int reverse_of_number(int n) {
    if (n == 0) return 0;
    cout << n % 10;
    n = n / 10;
    return reverse_of_number(n);
}

int main() {
    int n;
    cin >> n;
    reverse_of_number(n);
    return 0;
}