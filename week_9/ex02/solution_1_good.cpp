// 52 lines (not including this comment)
#include <iostream>
using namespace std;

int count_vowels (string word) {
  int count = 0;
  for (int i = 0; i < word.size(); i++) {
    if (word[i] == 'a' || 
        word[i] == 'e' || 
        word[i] == 'i' || 
        word[i] == 'o' || 
        word[i] == 'u' ||
        word[i] == 'A' || 
        word[i] == 'E' || 
        word[i] == 'I' || 
        word[i] == 'O' || 
        word[i] == 'U'
        ) {
          count++;
    }
  }
  return count;
}

int main () {
  string word1;
  string word2;
  string word3;
  double count1;
  double count2;
  double count3;
  double percent1;
  double percent2;
  double percent3;

  word1 = "Hello";
  word2 = "World";
  word3 = "Text";

  count1 = count_vowels(word1);
  count2 = count_vowels(word2);
  count3 = count_vowels(word3);

  percent1 = count1 / word1.size() * 100;
  percent2 = count2 / word2.size() * 100;
  percent3 = count3 / word3.size() * 100;

  cout << "Vowels in " << word1  << ": " << percent1 << "%" << endl;
  cout << "Vowels in " << word2  << ": " << percent2 << "%" << endl;
  cout << "Vowels in " << word3  << ": " << percent3 << "%" << endl;

  return 0;
}