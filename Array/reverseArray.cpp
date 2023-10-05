// Print Extreme in array
// input : 10,20,30,50,60,40  output: 10,40,20,60,30,50

// Two Pointer Approach...
#include <iostream>
using namespace std;

int main()
{

  int arr[] = {10, 23, 55, 23, 22, 64, 67, 76, 54, };
  int size = 9;
  int start = 0;
  int end = size - 1;

  while (start<=end){
    swap(arr[start],arr[end]);
    start++;
    end--;
  }
  for(int i =0;i<size;i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}