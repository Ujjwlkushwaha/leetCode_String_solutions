//problem 917 : reverse only letters

// Example 1:

// Input: s = "ab-cd"
// Output: "dc-ba"
// Example 2:

// Input: s = "a-bC-dEf-ghIj"
// Output: "j-Ih-gfE-dCba"
// Example 3:

// Input: s = "Test1ng-Leet=code-Q!"
// Output: "Qedo1ct-eeLg=ntse-T!"

// solution:: 

#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

string reverseletters(string s){
  int l=0;int h=s.length()-1;

  while(l<=h){
    if(isalpha(s[l]) && isalpha(s[h])){
      swap(s[l] , s[h]);
      l++;
      h--;
    }

    if(!isalpha(s[l])){
      l++;
    }else{
      h--;
    }
  }

  return s;
}
int main() {
  string str = "a-bC-dEf-ghIj";
  cout<<reverseletters(str);//"j-Ih-gfE-dCba"
}