//here we are finding out union of two arrays (Assuming duplicate elements are not present) ///Not done ....not uploaded

#include<iostream>
#include<vector>
using namespace std;

int main(){
  int arr[] = {3,5,7,8,3,7};
  int size_a = 6;
  int brr[] = {6,5,4,3,2,1};
  int size_b = 6;
  
  vector<int> ans;
  for(int i =0;i<size_a;i++){
    ans.push_back(arr[i]);
   
  }
    for(int i =0;i<size_b;i++){
       
    ans.push_back(brr[i]);
  }

    for(int i =0;i<ans.size();i++){
    cout<<ans[i]<<" ";
   
  }
  return 0 ;
}