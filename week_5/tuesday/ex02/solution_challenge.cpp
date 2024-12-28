#include <iostream>
using namespace std;

int main() {
    const string EMAIL = "stlheure@cabrillo.edu";
    const string PASSWORD = "password123";
    const int MAX_TRIES = 5;
    string email;
    string password;
    int tries = 0;
    

    cout << "Email: ";
    cin >> email;

    cout << "Password: ";
    cin >> password;
    tries++;

    while ((email != EMAIL || password != PASSWORD) && tries <= MAX_TRIES) {
        cout << "Incorrect email or password" << endl << endl;

        cout << "Email: ";
        cin >> email;

        cout << "Password: ";
        cin >> password;
        tries++;
    }

    if (tries < MAX_TRIES) {
        cout << "Logged in successfully" << endl;
    } else {
        cout << "You exceeded the max incorrect login amount. Try again later." << endl;
    }
}