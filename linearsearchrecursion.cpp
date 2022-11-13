#include<iostream>
using namespace std;

void print(int arr[],int n){
    cout<<"the size of array is"<<n<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
bool linearsearch(int arr[],int size,int key){
print(arr,size);
if (size==0){
    return false;
}

if ( arr[0]==key){
    return true;
}
else{
    bool remaining=linearsearch(arr+1,size-1,key);
    return remaining;
}
} 
int main(){

    int arr[5]={4,9,8,4,5};
    int size=5;
    int ans= linearsearch(arr,size,9);
    if(ans){
        cout<<" key is present in aray"<<endl;
    }
    else{
        cout<<"key is not present in aray"<<endl;
    }
}
