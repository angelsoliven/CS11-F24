// 17 lines (not including this comment)
#include <iostream>
using namespace std;

void percent_vowels (string word) {
  double count = 0;
  const string VOWELS = "aeiou";
  for (int i = 0, j = 0; i < word.size(); j = (j + 1) % VOWELS.size(), i += int(j == 0))
    if (word[i] == VOWELS[j] || word[i] == VOWELS[j] - 32) count++;
  cout << "Vowels in " << word << ": " << count / word.size() * 100 << "%" << endl;
}

int main () {
  percent_vowels("Hello");
  percent_vowels("World");
  percent_vowels("Text");
  return 0;
}