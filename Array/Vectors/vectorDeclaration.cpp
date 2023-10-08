#include<iostream>
#include<vector>
using namespace std;

int main(){
// vector<int>arr;
// int ans = (sizeof(arr)/sizeof(int));
// cout<<arr.size()<<endl;
// cout<<arr.capacity()<<endl;
// cout<<ans;
// return 0;
int n;
cout<<"Enter value of n :";
cin>>n;
// vector<int>arr(n);
// int ans = (sizeof(arr)/sizeof(int));
// cout<<arr.size()<<endl;
// cout<<arr.capacity()<<endl;
// cout<<ans;
// return 0;

vector<int>arr{10,34,56,67,43,67,21,56,90};
int ans = (sizeof(arr)/sizeof(int));
cout<<arr.size()<<endl;
cout<<arr.capacity()<<endl;
cout<<ans;
return 0;
}

