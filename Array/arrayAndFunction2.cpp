#include<iostream>
using namespace std;

void printArray(int arr[],int size){
    for(int i = 0;i<size;i++){
      cout<<arr[i]<<" ";
    }
}

void func(int a[],int size){
  a[0] = 20;
  a[1] = 49;
  a[3] = 98;
  //printArray(a,size);
}
int main(){
  int a[] = {23,45,77,43,45,63,2,1};
  int size = 8;
  func(a,size);
  printArray(a,size);
  }