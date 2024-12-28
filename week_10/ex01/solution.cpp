#include <iostream>
#include <cassert>
using namespace std;

/**
 * Returns the count of number of elements of specified value.
 * 
 * @param a Container of elements. 
 * @param size Size of container.
 * @param target Element to count frequency.
 * @return Number of times `target` appears in `a`.
 */
int frequency(string a[], int size, string target) {
    int freq = 0;
    for (int i = 0; i < size; i++) {
        if (a[i] == target) {
            freq++;
        }
    }
    return freq;
}

int main() {
    string foods[7]     = {"Pizza", "Burger", "Pasta", "Sushi", "Pizza", "Sushi", "Sushi"};
    string colors[8]    = {"Red", "Blue", "Green", "Yellow", "Blue", "Green", "Yellow", "Blue"};
    string cars[10]     = {"Toyota", "Honda", "Ford", "BMW", "Honda", "Toyota", "Audi", "Chevrolet", "BMW", "Ford"};

    // Assertion tests (uncomment when ready to test)
    assert(frequency(foods, 7, "Sushi") == 3);
    assert(frequency(colors, 8, "Green") == 2);
    assert(frequency(cars, 10, "Audi") == 1);

    cout << "All tests passed!\n";

    return 0;
}