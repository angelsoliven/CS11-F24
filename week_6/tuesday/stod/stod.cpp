// String to double convert 
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    string input = "9542.012";
    string dec;
    bool is_number = true;
    int dec_i = -1;
    double result = 0;
    double result_dec = 0;
    
    // Iterate through each character of the string
    for (int i = 0; i < input.length(); i++) {
        // Check if it is not a valid number
        if ((input[i] < '0' || input[i] > '9') && input[i] != '.') {
            is_number = false;
            // Break out of loop because there is no sense in continuing
            break;
        }
        // Find the location of the decimal
        if (input[i] == '.') {
            dec_i = i;
        }
    }

    if (is_number) {
        // There is a decimal place
        if (dec_i != -1) {
            // Extract the decimal portion of the string
            dec = input.substr(dec_i + 1);
            // Extract the integer portion of the string
            input = input.substr(0, dec_i);
        }

        // Translate to a number
        for (int i = 0; i < input.length(); i = i + 1) {
            result += (input[input.length() - i - 1] - '0') * pow(10, i);
        }
        // Translate the decimal portion to a number
        for (int i = 0; i < dec.length(); i = i + 1) {
            result += (dec[i] - '0') * pow(10, (i * -1 - 1));
        }
        cout << fixed << setprecision(4) << result << endl;

    } else {
        cout << "not a valid number\n";
    }

}