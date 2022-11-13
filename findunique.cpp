#include <iostream>
using namespace std;
int main()
{

    int array[] = {4, 8, 4, 6, 1, 1, 6};
    // we have to calculate the unique number means which is not repeated
    int size = 7;
    int findUnique;
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (array[i] == array[j])
            {
                array[i] = array[j] = -1;
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        
            if (array[i] > 0)
            {
                findUnique=array[i];
            
        }
    }
    cout<< "unique number is "<<findUnique;

}