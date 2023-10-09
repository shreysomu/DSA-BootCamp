#include <bits/stdc++.h>
using namespace std;

string removeVowels(string str)
{
  
  string newString;
  for (int i = 0; i < str.length(); i++)
  {
    if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
    {
    }
    else
    {
      newString += str[i];
    }
  }
  return newString;
}
int main(){
  string str;
  cout<<"Enter a String :";
  cin>>str;
  string res = removeVowels(str);
  cout<<"After Removing vowels string is : "<<res<<endl;
  return 0;
}