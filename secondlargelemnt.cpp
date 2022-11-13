#include <iostream>
#include<limits.h>
using namespace std;
int secondlargest (int array[], int size){
// int max=INT_MIN;

// int secondlargindex=-1;
// for(int i=0;i<size;i++){

//     if(arr[i]>max){
//         secondlargindex=i;
//         max=arr[i];
        
//     }
// }
// return secondlargindex;
//
// now simple 0n2 approach use only two for loop use

int max=INT_MIN;
int second_max=INT_MIN;
for(int i=0;i<5;i++){
    if(array[i]>max){
        max=array[i];
    }
}
for(int i=0;i<5;i++){

    if(array[i]>second_max && array[i]!=max){
        second_max=array[i];
    }
}
return second_max;
}
int main(){
int array[]={2,3,5,8,8};
// int find=secondlargest(array,5);
// cout<<array[find];
// // array[find]=-1;
// int largest=array[find];
// for(int i=0;i<5;i++){

//     if(array[i]==largest){
//         array[i]=-1;
//     }
// }
// int indexofsecondlarg=secondlargest(array,5);
// cout<<array[indexofsecondlarg];

cout<<secondlargest(array,5);
return 0;
}
