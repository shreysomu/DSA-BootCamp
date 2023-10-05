// Find Maximum and minimum elements of array
#include <iostream>
using namespace std;
int main()
{
  int arr[] = {10, 23, 45, 68, 20, 34, 87, -12};
  int size = 8;
  int mini = INT_MAX;
  int maxi = INT_MIN;

  for (int i = 0; i < size; i++)
  {
    if (arr[i] > maxi)
    {
      maxi = arr[i];
    }
    if (arr[i] < mini)
    {
      mini = arr[i];
    }
  }

  cout << "Maximum Elemenet of this array is " << maxi << endl;
  cout << "Minimum Elemenet of this array is " << mini << endl;
  return 0;
}