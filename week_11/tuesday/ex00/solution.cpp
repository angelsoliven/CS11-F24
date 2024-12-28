#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    double input;
    vector<double> inputs;

    // Take input till EOF
    while (cin >> input) {
        inputs.push_back(input);
    }

    // Sort the vector
    sort(inputs.begin(), inputs.end());

    // Output each element
    for (int i = 0; i < inputs.size(); i++) {
        cout << inputs[i] << endl;
    }

    return 0;
}