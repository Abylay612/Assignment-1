#include <iostream>
using namespace std;

int number_of_digits(int n) {
    int count = 0;
    if (n == 0) return 0;
    n = n / 10;
    count += 1;
    return count + number_of_digits(n);
}

int main() {
    int n;
    cin >> n;
    int result = number_of_digits(n);
    cout << result;
    return 0;
}