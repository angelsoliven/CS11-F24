#include <iostream>
#include <cassert>
#include "tests.h"
using namespace std;

/**
 * Performs linear search on an array, returning the index of
 * the first occurrence of an element.
 * 
 * @param a Array to search
 * @param size Size of `a`
 * @param target Element to find
 * @return Index of first occurrence of `target`, -1 if not found.
 */
// int search

/**
 * Removes the first occurrence of an element from a partially filled array,
 * maintaining the original order. Also adjusts the size.
 * 
 * @param a Array to remove element from
 * @param size Size of `a`
 * @param target Element to "delete"
 */
// void del

int main() {
    const int CAP = 20;
    int a[CAP] = {12, 45, 78, 3, 56, 89, 23, 67, 12, 34};
    int b[CAP] = {9, 24, 76, 50, 33, 21, 24, 24, 88, 45};
    int c[CAP] = {15, 62, 97, 62, 38, 47};

    int a_size = 10;
    int b_size = 10;
    int c_size = 6;

    // TESTS
    int test_a[CAP] = {12, 45, 78, 3, 56, 89, 23, 67, 12, 34};
    int test_b[CAP] = {9, 24, 76, 50, 33, 21, 24, 24, 88, 45};
    int test_c[CAP] = {15, 62, 97, 62, 38, 47};

    int test_a_size = 10;
    int test_b_size = 10;
    int test_c_size = 6;

    // (uncomment to test)
    // cout << "Delete 12:\n";
    // // Print test
    // print(a, a_size);
    // del(a, a_size, 12);
    // print(a, a_size);
    // cout << endl;
    // // Assert test
    // solution_del(test_a, test_a_size, 12);
    // assert(a_size == test_a_size);
    // assert(comp_array(a, a_size, test_a));

    // cout << "Delete 33:\n";
    // print(b, b_size);
    // del(b, b_size, 33);
    // print(b, b_size);
    // cout << endl;
    // solution_del(test_b, test_b_size, 33);
    // assert(b_size == test_b_size);
    // assert(comp_array(b, b_size, test_b));

    // cout << "Delete 47:\n";
    // print(c, c_size);
    // del(c, c_size, 47);
    // print(c, c_size);
    // solution_del(test_c, test_c_size, 47);
    // assert(c_size == test_c_size);
    // assert(comp_array(c, c_size, test_c));

    return 0;
}