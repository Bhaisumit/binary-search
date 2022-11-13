#include <iostream>
using namespace std;

int originalarray(int arr[], int n)
{

  for (int i = 0; i < n; i++)
  {
    cout << arr[i];
  }
}

int sortinghappen(int arr[], int n)
{

  for (int i = 1; i < n; i++)
  {

    int temp = arr[i];
    int j = i - 1;
    while (j >= 0 && arr[j] > temp)
    {

      arr[j + 1] = arr[j];
      j--;
    }

    arr[j + 1] = temp;
  }
}
// int sortedarray(int array[],int n){
// for (int i=0; i<n; i++){
// cout<<array[i];
//}
//}

int main()
{

  int array[] = {5, 4, 3, 1, 0};
  cout << "original array is";
  originalarray(array, 5);
  cout << "inserion sorting occurs";
  sortinghappen(array, 5);
  for (int i = 0; i < 5; i++)
  {
    cout << array[i];
  }

  // sortedarray(array, 5);
}