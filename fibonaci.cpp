#include<iostream>
using namespace std;
int fibonacci (int m){
    // base case
    if(m==1 )
    return 0;
    if(m==2)
    return 1;
    else{
 return (fibonacci(m-1)+fibonacci(m-2));
    }
}
int main(){
    int n;
//fibonacci series is sum of last two numbers create third no and so on ...
// eg:- 0,1,1,2,3,5,8.......
// in this program we find the value of given element in fabonacci seires with help of recursion
cout<<"enter the given number which value that we find in this series "<<endl;
cin>>n;
int ans=fibonacci(n);
cout <<"the value of that number is"<<ans<<endl;

}


