#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int b, n, result;

    cout << "Enter the base: ";
    cin >> b;

    cout << "Enter the power: ";
    cin >> n;

    result = 1;
    for (int i = 0; i < n; i++) {
        result *= b;
    }

    cout << b << "^" << n << " = " << result << endl;
}