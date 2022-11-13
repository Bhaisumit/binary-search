#include <iostream>
using namespace std;
int main()
{

    int array[] = {3, 4, 0, 2, 4};
    int size = 5;
    int targetsum = 7;
    int ans = 0;
    
    cout << "we have to calculate those triplets whose sum is equal to target sum which is here 7" << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            for(int k= j+1; k<size; k++){
               if(array[j]+array[i]+array[k]==targetsum){
                ans++;
            }
            }
            
        }
    }
    cout<<ans;
}