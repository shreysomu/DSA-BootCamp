#include<iostream>
#include<vector>
using namespace std;

int main(){
vector<int>arr;
//int ans = (sizeof(arr)/sizeof(int));
cout<<arr.size()<<endl;
cout<<arr.capacity()<<endl;
//cout<<ans;

//Insert......
arr.push_back(5);
arr.push_back(8);
arr.push_back(7);

for(int i =0;i<arr.size();i++){
  cout<<arr[i]<<" ";
}
cout<<endl;

//Pop 
return 0;
}