#include<iostream>
#include<vector>
using namespace std;

int main(){
  vector<int>arr{10,23,56,78,90};
  int sum = 88;

  for(int i = 0;i<arr.size();i++){
    int element  = arr[i];

    for(int j = i+1;j<arr.size();j++){
      if(element +  arr[j] == sum){
        cout<<"pair found "<<element<<","<<arr[j]<<endl;
      }
    }
  }
  
  return 0 ;
}