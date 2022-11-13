#include<iostream>
using namespace std;
bool binarysearch(int arr[],int start,int end, int key){

    //base case
    if(start>end){
        return false;
    }
   int mid=start+(end-start)/2;

if(arr[mid]==key){
    return true;}
   if( arr[mid]>key){
       // here recursion applied
       return  binarysearch(arr,mid+1,end,key);

   }
   else{  // here also recursion applied
       return binarysearch(arr,start,mid-1,key);
   }
}
int main(){
    int arr[5]={5,9,2,7,4};
    int size=5;
    int key=2;
 cout<<"present or not"<< binarysearch(arr,0,5,key);
    return 0;
}