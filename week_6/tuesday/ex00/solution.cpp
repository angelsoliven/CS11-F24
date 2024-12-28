#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a = 0;
    double b = 4;
    double n = 100000;
    double delta_x = (b - a) / n;
    double area = 0;

    for (double xi = a; xi < b; xi += delta_x) {
        area += delta_x * pow(xi, 2);
    }

    cout << "The area below the polynomial x^2 between x = 0 and x = 4 is " << area << endl;

    return 0;
}