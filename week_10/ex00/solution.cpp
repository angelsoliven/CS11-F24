#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main() {
    srand(time(NULL));
    const int SIZE = 20;
    string responses[SIZE] = {
        "It is certain",
        "It is decidedly so",
        "Without a doubt",
        "Yes, definitely",
        "You may rely on it",
        "As I see it, yes",
        "Most likely",
        "Outlook good",
        "Yes",
        "Signs point to yes",
        "Reply hazy, try again",
        "Ask again later",
        "Better not tell you now",
        "Cannot predict now",
        "Concentrate and ask again",
        "Don't count on it",
        "My reply is no",
        "My sources say no",
        "Outlook not so good",
        "Very doubtful"
    };
    string input;

    cout << "Ask a question: ";
    getline(cin, input);

    cout << responses[rand() % SIZE] << endl;

    return 0;
}