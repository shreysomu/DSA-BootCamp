//Find Unique Element : Every elements occurs more than once except one.
//ie. {1,2,4,2,1,3,6,,5,5,6,4} --->> here 3 is an unique element as it occurs only once.

//##Approach----->>> we can use the xor operator


#include<iostream>
#include<vector>
using namespace std;
int findUnique(vector<int>arr){
 int res  = 0;
 for(int i =0;i<arr.size();i++){
  res = res ^ arr[i];
 }
 return res;
}
using namespace std;
int main(){
  int n ;
  cout<<"Enter the value of n :";
  cin>>n;
  vector<int>arr(n);
  cout<<"Enter the elements :"<<endl;
  for(int i = 0;i<arr.size();i++){
    cin>>arr[i];
  }

  int uniqueElement = findUnique(arr);
  cout<<"Unique Element is :"<<uniqueElement<<endl;
  return 0;
}