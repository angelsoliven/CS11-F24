#include <iostream>
#include <cassert>
#include <cmath>
#include <cstdlib>
#include <time.h>
#include <climits>
using namespace std;


/**
 * Returns base raised to the power exponent.
 * 
 * @param b Base to raise to some `n`
 * @param n Power the `b` is raised to
 * @return `b` raised to the `n`th power.
 */
int power(int b, int n) {
    int result = 1;
    for (int i = 0; i < n; i++) {
        result *= b;
    }
    return result;
}

/**
 * The magnitude of a real number `n` without regard to its sign.
 * 
 * @param n Number to take the absolute value of
 * @return Absolute value of `n`
 */
double absolute(int n) {
    if (n >= 0) { return n; }
    return n * -1; 
}

/**
 * Returns the integral value that is nearest to n, with 
 * halfway cases rounded away from zero.
 * 
 * @param n Value to round.
 * @return n rounded.
 */
int rounded(double n) {
    int integer = n;
    double frac = n - integer;
    if (frac >= 0.5) { return integer + 1; } 
    return integer;
}

int main() {
    srand(time(0));

    int b = rand() % 10;
    int n = rand() % 10;
    double a = rand() / INT_MAX + rand() % 10;

    assert(pow(b, n) == power(b, n));
    cout << pow(b, n) << " == " << power(b, n) << endl;

    assert(fabs(a) == absolute(a));
    cout << fabs(a) << " == " << absolute(a) << endl;

    assert(round(a) == rounded(a));
    cout << round(a) << " == " << rounded(a) << endl;

    return 0;
}