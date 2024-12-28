#include <iostream>
#include <vector>
using namespace std;

/**
 * Minkowski Sum of two sets.
 * 
 * The Minkowski Sum of two sets, A and B is defined as the set which contains
 * every elements of A added to every element of B, or equivalently, every
 * element in B added to every element of a A. 
 * @see https://en.wikipedia.org/wiki/Minkowski_addition
 * 
 * @param a, b Set of elements
 * @return a + b
 */
vector<int> minkowski_sum(vector<int> a, vector<int> b) {
    vector<int> c;
    for (int i = 0; i < a.size(); i++) {
        for (int j = 0; j < b.size(); j++) {
            c.push_back(a[i] + b[j]);
        }
    }
    return c;
}

void print(vector <int> a);

int main() {
    vector<int> a = {1, 2, 3};
    vector<int> b = {2, 4, 6, 8};
    vector<int> c = {32, 64, 96};
    vector<int> d = {0, 1, 1, 2, 3, 5};
    
    // Tests:
    print(a);
    cout << " + ";
    print(b);
    cout << " = ";
    print(minkowski_sum(a, b));
    cout << endl;

    // Tests:
    print(c);
    cout << " + ";
    print(d);
    cout << " = ";
    print(minkowski_sum(c, d));
    cout << endl;

    return 0;
}

void print(vector <int> a) {
    cout << "{";
    for (int i = 0; i < a.size() - 1; i++) {
        cout << a[i] << ", ";
    }
    cout << a.back() << "}";
}
