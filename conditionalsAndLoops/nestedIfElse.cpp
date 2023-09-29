#include <iostream>
using namespace std;

int main()
{

  int marks;
  cout << "Enter The Marks :";
  cin >> marks;
  if (marks >= 90)
  {
    cout << "A Grade " << endl;
  }
  else if (marks >= 80)
  {
    cout << "B Grade " << endl;
  }

  else if (marks >= 60)
  {
    cout << "C Grade " << endl;
  }
  else if (marks >= 33)
  {
    cout << "D Grade " << endl;
  }
  else
  {
    cout << "Fail" << endl;
  }
}
