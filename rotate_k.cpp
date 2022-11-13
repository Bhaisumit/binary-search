#include<iostream>
using namespace std;
int main(){
int a[]={3,4,5,6,9,0};
int n=6;
int ans[6];
int k=3;
k=k%n;
// 
int j=0;
for(int i=n-k;i<n;i++){
    ans[j]=a[i];
    j++;
}
for(int i=0;i<=k;i++ ){
    ans[j]=ans[i];
j++;
}

for(int i=0;i<n ;i++)
{
   cout<< ans[i]<<endl;
}


}