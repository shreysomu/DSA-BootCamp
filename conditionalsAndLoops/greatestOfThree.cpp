#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main() {
    //Write your code here
     int a,b,c;
     cin>>a>>b>>c;
     if(a>b){
         if(a>c){
             cout<<a<<endl;
         }
    else if(b>c){
        cout<<b<<endl;
    }
    else 
       cout<<c<<endl;
     }
    return 0;
}