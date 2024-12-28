#include <iostream>
using namespace std;

int main() {
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
  string bar;
  int digit, zip, check, sum = 0;

  cout << "Enter your zip code: ";
  cin >> zip;

  for (int i = 0; i < 5; i++) {
    digit = zip % 10;
    sum += digit;
    switch(digit) {
    case 1:
      bar = ONE + bar;
      break;
    case 2:
      bar = TWO + bar;
      break;
    case 3:
      bar = THREE + bar;
      break;
    case 4:
      bar = FOUR + bar;
      break;
    case 5:
      bar = FIVE + bar;
      break;
    case 6:
      bar = SIX + bar;
      break;
    case 7:
      bar = SEVEN + bar;
      break;
    case 8:
      bar = EIGHT + bar;
      break;
    case 9:
      bar = NINE + bar;
      break;
    case 0:
      bar = ZERO + bar;
      break;
    }
    zip /= 10;
  }

  check = !(sum % 10) ? 0 : 10 - sum % 10;
  switch(check) {
  case 1:
    bar += ONE;
    break;
  case 2:
    bar += TWO;
    break;
  case 3:
    bar += THREE;
    break;
  case 4:
    bar += FOUR;
    break;
  case 5:
    bar += FIVE;
    break;
  case 6:
    bar += SIX;
    break;
  case 7:
    bar += SEVEN;
    break;
  case 8:
    bar += EIGHT;
    break;
  case 9:
    bar += NINE;
    break;
  case 0:
    bar += ZERO;
    break;
  }

  cout << "|" << bar << "|\n";

  return 0;
}