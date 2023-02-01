
#include <iostream>
using namespace std;

int main() {
    int n, i, sum = 0;

    cout << "Enter an integer: ";
    cin >> n;

    for (i = 1; i <= n; i++) {
        sum += i * i;
    }

    cout << "Sum of squares of first " << n << " natural numbers is " << sum;
    return 0;
}