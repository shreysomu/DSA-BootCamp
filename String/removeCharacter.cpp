#include <bits/stdc++.h>
#include <iostream>
#include <cstring>
using namespace std;

string removeAllOccurrencesOfChar(string input, char c)
{
  // Write your code here
  string ans;

  int n = input.length();

  for (int i = 0; i < n; i++)

  {

    char temp = input[i];

    if (temp != c)

    {

      ans.push_back(temp);
    }
  }

  return ans;
}

int main()
{
  string input;
  cout<<"Enter a string : ";
  cin>>input;
  char c;
  cout<<"Enter a character which you want to remove :";
  cin >> c;
  string output = removeAllOccurrencesOfChar(input, c);
  cout << output << endl;
  return 0;
}