//find number of 0's and 1's...
#include<iostream>
using namespace std;

int main(){
  int arr[] = {1,0,0,1,1,0,1,1,1,0,0,8,9};
  int size = 12;
  int zeroCount = 0;
  int oneCount = 0;

  for(int i =0;i<size;i++){
    if(arr[i]==0)
     zeroCount++;
    if(arr[i]==1)
     oneCount++;
  }
  cout<<"Number of 0's :"<<zeroCount<<endl;
    cout<<"Number of 1's :"<<zeroCount<<endl;
  return 0;
}