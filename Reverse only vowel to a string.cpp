// 345. Reverse Vowels of a String


// Given a string s, reverse only all the vowels in the string and return it.

// The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in both lower and upper cases, more than once.



// Example 1:

// Input: s = "hello"
// Output: "holle"
// Example 2:

// Input: s = "leetcode"
// Output: "leotcede"


#include <iostream>
#include<string>
using namespace std;

bool vowel(char ch)
{
  ch = tolower(ch);
  
  if(ch=='a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
    return true;
  }
  return false;
}

string reverseVowel(string str){
  int s=0;
  int e = str.size()-1;

  while(s<e){
    if(vowel(str[s]) && vowel(str[e]) ){
      swap(str[s] , str[e]);
      s++;
      e--;
    }else if(!vowel(str[s])){
      s++;
    }else{
      e--;
    }
  }
return str;
}
int main() {

  string str = "Euston saw I was not Sue.";

  cout << "After reverse :: " << reverseVowel(str);
  // vowel('A');
  //euston saw I was not SuE.
}