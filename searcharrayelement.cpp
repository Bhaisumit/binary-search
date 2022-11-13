#include<iostream>
using namespace std;
int   linersearch(int arr[],int n, int key){
for(int i=0;i<n;i++){
          if(arr[i]==key){
              return i;
          }
      }
         return -1;
  }
  

  int main(){
      int n;
      cout<<"the no, of elements in array are";
      cin>>n;
      int arr[n];
    
      cout<<"the element of array are"<<endl;
      for(int i=0;i<n;i++){
          cin>>arr[i];
      }
      int key;
      cout<<"the key is";
      cin>>key;
      cout<<"Element is present at index"<< linersearch(arr,n , key);
  }