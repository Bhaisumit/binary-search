#include<iostream>
using namespace std;



bool issorted(int arr[],int size){
    if (size==0||size==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;

    }
    else{
     bool remainingpart= issorted(arr+1,size-1);
     return true;
}
}
int main(){
    int arr[5]={7,9,67,89};
    int size=4;
    bool ans=issorted(arr,size);
    if(ans){
        cout<<"array is sorted";
    }
    else{
        cout<<"array is not sorted";
    }
        
    return 0;
}