#include <iostream>
using namespace std;

int main() {
	double x, y;

    cout << "x: ";
    cin >> x;
    cout << "y: ";
    cin >> y;

    cout << "The point (" << x << ", " << y << ") lies";

    if (x == 0 && y == 0) {
        cout << " on the origin.\n";
    } else if (x == 0) {
        cout << " on the x-axis.\n";
    } else if (y == 0) {
        cout << " on the y-axis.\n";
    } else if (x > 0 && y > 0) {
        cout << " within QI.\n";
    } else if (x < 0 && y > 0) {
        cout << " within QII.\n";
    } else if (x < 0 && y < 0) {
        cout << " within QIII.\n";
    } else {
        cout <<  "within QIV.\n";
    }
}