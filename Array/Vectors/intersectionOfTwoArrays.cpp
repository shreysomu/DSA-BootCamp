#include<iostream>
#include<vector>
using namespace std;

int main(){
  vector<int>arr{1,2,3,3,4,5,7,9};
  vector<int>brr{3,4,5,8,9,10};
  vector<int>ans;

//Outer Loop on arr vector.....
  for(int i =0;i<arr.size();i++){
    int element = arr[i];
    //For each element run loop on brr.....
    for(int j = 0;j<brr.size();j++){
      if(element == brr[j]){
        brr[j]=-1;  //marking  ....(we can use break too)
        ans.push_back(element);
      }

    }
  }
  for(auto value :ans){
    cout<<value<<" ";
  }
  return 0 ;
}


