#include "tests.h"
using namespace std;

void print(int a[], int size) {
    cout << left << setw(12) << ("Size: " + to_string(size)) << " Array: {";
    for (int i = 0; i < size -1; i++) {
        cout << a[i] << ", ";
    }
    cout << a[size -1] << "}\n";
} 

bool comp_array(int a[], int size, int test[]) {
    for (int i = 0; i < size; i++) {
        if (a[i] != test[i]) {
            return false;
        }
    }
    return true;
}

int solution_search(int a[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (a[i] == target) {
            return i;
        }
    }
    return -1;
}

void solution_del(int a[], int& size, int target) {
    int start = solution_search(a, size, target);
    for (int i = start; i < size; i++) {
        a[i] = a[i + 1];
    }
    size--;
}