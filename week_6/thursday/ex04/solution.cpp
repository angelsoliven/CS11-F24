#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a = 0, b = 8, n = 1000;
    double delta_x = (b - a) / (double)n;
    double result, x;

    result = (sin(M_PI * a) + 2) + (sin(M_PI * b) + 2);

    for (int i = 1; i < n; i++) {
        x = a + i * delta_x;
        if (i % 2 == 0) { // Subscript is even
            result += 2 * (sin(M_PI * x) + 2);
        } else { // Subscript is odd
            result += 4 * (sin(M_PI * x) + 2);
        }
    }
    result *= delta_x / 3.0;

    cout << "The area below the function sin(πx)+2 between x = " << a << " and "
         << "x = " << b << " with " << n << " subdivisions is " << result << endl;

    return 0;
}