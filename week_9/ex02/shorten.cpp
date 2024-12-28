/**
Shorten the code while following good coding practices:
1. Lines must be less than or equal to 100 characters 
2. Variables must have descriptive names (you can change these names as long as yours are descriptive)
3. You may use integer literals and string literals
4. Do not put more than one statement on the same line. Aka no
percent1 = count1 / word1.size() * 100; percent2 = count2 / word2.size() * 100;
***You may remove this comment***
*/
#include <iostream>
using namespace std;

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

  count1 = 0;
  count2 = 0;
  count3 = 0;

  for (unsigned i = 0; i < word1.size(); i++) {
    if (word1[i] == 'a' || 
        word1[i] == 'e' || 
        word1[i] == 'i' || 
        word1[i] == 'o' || 
        word1[i] == 'u' ||
        word1[i] == 'A' || 
        word1[i] == 'E' || 
        word1[i] == 'I' || 
        word1[i] == 'O' || 
        word1[i] == 'U'
        ) {
          count1++;
    }
  }

  for (unsigned i = 0; i < word2.size(); i++) {
    if (word2[i] == 'a' || 
        word2[i] == 'e' || 
        word2[i] == 'i' || 
        word2[i] == 'o' || 
        word2[i] == 'u' ||
        word2[i] == 'A' || 
        word2[i] == 'E' || 
        word2[i] == 'I' || 
        word2[i] == 'O' || 
        word2[i] == 'U'
        ) {
          count2++;
    }
  }

  for (unsigned i = 0; i < word3.size(); i++) {
    if (word3[i] == 'a' || 
        word3[i] == 'e' || 
        word3[i] == 'i' || 
        word3[i] == 'o' || 
        word3[i] == 'u' ||
        word3[i] == 'A' || 
        word3[i] == 'E' || 
        word3[i] == 'I' || 
        word3[i] == 'O' || 
        word3[i] == 'U'
        ) {
          count3++;
    }
  }

  percent1 = count1 / word1.size() * 100;
  percent2 = count2 / word2.size() * 100;
  percent3 = count3 / word3.size() * 100;

  cout << "Vowels in " << word1  << ": " << percent1 << "%" << endl;
  cout << "Vowels in " << word2  << ": " << percent2 << "%" << endl;
  cout << "Vowels in " << word3  << ": " << percent3 << "%" << endl;

  return 0;
}