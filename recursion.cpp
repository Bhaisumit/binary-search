#include<iostream>
using namespace std;

 int factorial(int n){

   if(n==0){
       return 1;
   }
else{
    return n * factorial(n-1);

}


 }
 int main(){
int number,ans;
cout<<" today we find the recursion of given number"<<endl;
cout<<"Enter the given number"<<endl;
cin >>number;
ans= factorial (number);

cout<<"the factorial of given number is " <<  ans <<endl;





 }