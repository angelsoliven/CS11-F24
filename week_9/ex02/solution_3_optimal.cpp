// 24 lines (not including this comment)
#include <iostream>
using namespace std;

double percent_vowels (string word) {
  double count = 0;
  const string VOWELS = "aeiou";

  for (int i = 0; i < word.size(); i++)
    for (int j = 0; j < VOWELS.size(); j++)
      if (word[i] == VOWELS[j] || word[i] == VOWELS[j] - 32) 
        count++;
  
  return count / word.size() * 100;
}

int main () {
  string word1 = "Hello", word2 = "World", word3 = "Text";

  cout << "Vowels in " << word1 << ": " << percent_vowels(word1) << "%" << endl;
  cout << "Vowels in " << word2 << ": " << percent_vowels(word2) << "%" << endl;
  cout << "Vowels in " << word3 << ": " << percent_vowels(word3) << "%" << endl;

  return 0;
}