#include <iostream>
using namespace std;

int main() {
    const string EMAIL = "stlheure@cabrillo.edu";
    const string PASSWORD = "password123";
    string email;
    string password;

    cout << "Email: ";
    cin >> email;

    cout << "Password: ";
    cin >> password;

    while (email != EMAIL || password != PASSWORD) {
        cout << "Incorrect email or password" << endl << endl;

        cout << "Email: ";
        cin >> email;

        cout << "Password: ";
        cin >> password;
    }

    cout << "Logged in sucessfully. Welcome " << email << "." << endl;
}