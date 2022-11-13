#include <iostream>
using namespace std;

void originalarray(int array[], int n) // here n refers to size of an array
{

  for (int i = 0; i < n; i++)
  {

    cout << array[i] << endl;
  }
}

void selectionsort(int array[], int n)
{

  for (int i = 0; i < n - 1; i++)
  {

    int min = i;
    for (int j = i + 1; j < n; j++)
    {

      if (array[j] < array[min])
      {
        min = j;
      }
    }

    swap(array[i], array[min]);
  }
}

void sortedarray(int array[], int n) // here n refers to size of an array
{

  for (int i = 0; i < n; i++)
  {

    cout << array[i] << endl;
  }
}

int main()
{

  int array[] = {1, 9, 0, 3, 2};
  cout << "original array is  " << endl;
  originalarray(array, 5);
  cout << " selection sorted array occurs" << endl;

  selectionsort(array, 5);

  cout << "sorted array is  " << endl;
  sortedarray(array, 5);
}