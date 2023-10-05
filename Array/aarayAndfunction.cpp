#include<iostream>
 using namespace std;

void printArray(int arr[],int size){
    for(int i = 0;i<size;i++){
      cout<<arr[i]<<" ";
    }
}

void inc(int brr[],int size){
  brr[0]= brr[0] + 7;
 // printArray(brr,size);
}


 int main(){
  int array[ ] = {10,20,40,60,70,80};
  int size = 6;
  inc(array,size);
  printArray(array,size);

 }