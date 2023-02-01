#include <iostream>
using namespace std;

int factorial(int num){
    if (num == 0) return 1;
    else return num * factorial(num - 1);
}

int main() {
    int n, i, sum = 0;

    cout << "Enter an Integer: ";
    cin >> n;

    for (i = 1; i <= n; i++) {
        sum += factorial(i);
    }

    cout << "Sum of factorials of first " << n << " natural numbers is " << sum;
    return 0;
}