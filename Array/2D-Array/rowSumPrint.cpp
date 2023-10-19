#include <iostream>
using namespace std;

void printRowSum(int arr[][3], int row, int col)
{
 
  for (int i = 0; i < row; i++)
  {
     int sum = 0;
    for (int j = 0; j < col; j++)
    {
      sum += arr[i][j];
    }
    cout << sum << " ";
  }
}
int main()
{
  int arr[3][3]={{3,4,5},{4,6,7},{6,7,9}};
  int row = 3;
  int col = 3;
  // for (int i = 0; i < row; i++)
  // {
  //   for (int j = 0; j < col; j++)
  //   {
  //     cin >> arr[i][j];
  //   }
  // }
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      cout << arr[i][j] << " ";
    }
    cout<<endl;
  }
  printRowSum(arr, row, col);
}