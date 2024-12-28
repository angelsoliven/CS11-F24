#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a = 0, b = 8, n = 1000;
    double delta_x = (b - a) / (double)n;
    double result, x;

    cout << "The area below the function sin(πx)+2 between x = " << a << " and "
         << "x = " << b << " with " << n << " subdivisions is " << result << endl;

    return 0;
}