#include <iostream>
using namespace std;

// int main(){
//   int arr[] = {10,30,50,87,90,65};
//   int size = 6;
//   int key;
//   cout<<"Enter the key to find : ";
//   cin>>key;
//   bool flag = 0;
//   int i;
//   for( i = 0;i<size;i++){
//     if(arr[i]==key)
//     flag = 1;
//   }

//   if(flag)
//     cout<<"Key is found at index "<<i<<endl;
//     else
//      cout <<"Key is not found in this array ."<<endl;
//      return 0;
// }

// using function ....

bool find(int arr[], int size, int key)
{

  for (int i = 0; i < size; i++)
  {
    if (arr[i] == key)
      return true;
  }
  return false;
}

int main()
{
  int arr[] = {10, 30, 50, 87, 90, 65};
  int size = 6;
  int key;
  cout << "Enter the key to find : ";
  cin >> key;
 if( find(arr, size, key))
   cout<<"Key is found.";
  else
    cout<<"Key is not found."<<endl;
   return 0;
}