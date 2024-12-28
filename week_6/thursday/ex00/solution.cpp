#include <iostream>
using namespace std;

int main() {
    double input, max, sum = 0;

    cin >> input;

    if (input == 0) {
        cout << "No input\n";
    } else {
        max = input;

        while (input != 0) {
            sum += input;
            if (input > max) {
                max = input;
            }
            cin >> input;
        }
        cout << "Max: " << max << endl;
        cout << "Sum: " << sum << endl;
    }
}