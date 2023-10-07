#include <iostream>
using namespace std;

int main() {
    //Write your code here
    int n ;
    cout<<"Enter a Number :"<<endl;
    cin>>n;

    int Evensum = 0;
    int oddSum = 0;
    while (n != 0) {
      int digit = n % 10;
      if (digit % 2 == 0) {
         Evensum = Evensum + digit;
      }
      else{
          oddSum = oddSum + digit;
      }
      n = n/10;
    }

    cout<<"Sum of Even digit is :"<<Evensum<<endl<<"Sum of odd digit is :"<<oddSum<<endl;

    return 0;
}