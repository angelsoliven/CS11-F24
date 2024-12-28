#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;

    cout << "Times table generator" << endl;
    cout << "Creates a times table n x n" << endl << endl;

    cout << "Enter a number n: ";
    cin >> n;

    // Ignore this line
    int w = to_string(n * n).length() + 1;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << left << setw(w) << i * j;
        }
        cout << endl;
    }
}