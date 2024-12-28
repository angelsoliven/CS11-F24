#include<iostream>
#include <iomanip>

using namespace std;

int main() {
	string sequence;
	cin >> sequence;

	int gc = 0;
	int at = 0;
	for (int i = 0; i < sequence.size(); i++) {
		if (sequence[i] == 'G' || sequence[i] == 'C') {
			gc++;
		}
		if (sequence[i] == 'A' || sequence[i] == 'T') {
			at++;
		}
	}
	cout << fixed << setprecision(0);
	cout << "Percentage of Gs and Cs: " << (double) gc / (gc+at) * 100 << endl;
	return 0;
}