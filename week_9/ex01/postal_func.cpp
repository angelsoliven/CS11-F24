#include <iostream>
using namespace std;

string digit_to_bar(int digit) {
  const string ONE = ":::||";
  const string TWO = "::|:|";
  const string THREE = "::||:";
  const string FOUR = ":|::|";
  const string FIVE = ":|:|:";
  const string SIX = ":||::";
  const string SEVEN = "|:::|";
  const string EIGHT = "|::|:";
  const string NINE = "|:|::";
  const string ZERO = "||:::";
  
  switch(digit) {
  case 1:
    return ONE;
  case 2:
    return TWO;
  case 3:
    return THREE;
  case 4:
    return FOUR;
  case 5:
    return FIVE;
  case 6:
    return SIX;
  case 7:
    return SEVEN;
  case 8:
    return EIGHT;
  case 9:
    return NINE;
  case 0:
    return ZERO;
  }
  return "ERROR";
}

int main() {
  string bar;
  int digit, zip, check, sum = 0;

  cout << "Enter your zip code: ";
  cin >> zip;

  for (int i = 0; i < 5; i++) {
    digit = zip % 10;
    sum += digit;
    bar = digit_to_bar(digit) + bar;
    zip /= 10;
  }

  check = !(sum % 10) ? 0 : 10 - sum % 10;
  bar += digit_to_bar(check);

  cout << "|" << bar << "|\n";

  return 0;
}