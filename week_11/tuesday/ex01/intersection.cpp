#include <iostream>
#include <vector>
using namespace std;

/**
 * Linear search of vector, returning if an element exists in the vector.
 * 
 * @param a Vector to search
 * @param target Element to find
 * @return True if `target` exists in `a`, otherwise false.
 */
bool contains(vector<int> a, int target) {
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == target) return true;
    }
    return false;
}

/**
 * Intersection of two sets.
 * 
 * The intersection of two sets `a` and `b`, denoted by a ∩ b, is the set 
 * containing all elements of a that also belong to b or equivalently, 
 * all elements of a that also belong to b. 
 * @see https://en.wikipedia.org/wiki/Intersection_(set_theory)
 * 
 * @param a, b Set of elements
 * @return a ∩ b
 */
vector<int> intersection(vector<int> a, vector<int> b);

// For testing, do not writing anything here
void print(vector <int> a);

int main(){
    vector<int> a = {1, 2, 2, 1, 1};
    vector<int> b = {2, 2, 1000, 12};
    vector<int> c = {4, 9, 5, 2, 3, 2, 9, 9};
    vector<int> d = {12, 23, 3, 4, 0, 9};
    
    // Tests:
    print(a);
    cout << " ∩ ";
    print(b);
    cout << " = ";
    print(intersection(a, b));
    cout << endl;

    print(c);
    cout << " ∩ ";
    print(d);
    cout << " = ";
    print(intersection(c, d));
    cout << endl;

    return 0;
}

// ----------------------------------------------------------
void print(vector <int> a) {
    cout << "{";
    for (int i = 0; i < a.size() - 1; i++) {
        cout << a[i] << ", ";
    }
    cout << a.back() << "}";
}
