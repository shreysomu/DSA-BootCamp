#include<iostream>
using namespace std;

int main(){

  int n;
  cout<<"Enter the Number :";
  cin>>n;

//outer Loop
  for(int row = 0;row<n;row++){
    for(int col =0 ;col<n;col++){
      cout<<"* ";
    }
    cout<<endl;
  }
}