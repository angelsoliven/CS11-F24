#include <iostream>
using namespace std;

int main() {
    // Constants (correct values)
    const string EMAIL = "FIXME";
    const string PASSWORD = "FIXME";

    string email, password;

    cout << "Email: ";
    cin >> email;

    cout << "Password: ";
    cin >> password;

    if (email == EMAIL && password == PASSWORD) {
        cout << "Logged in sucessfully. Welcome " << email << "." << endl;
    } else {
        cout << "Email or password incorrect." << endl;
    }

}