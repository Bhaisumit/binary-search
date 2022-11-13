#include<iostream>
using namespace std;
 int main() {
    int a=4;
     int * p=& a;

     // Address of a----
     cout <<"the value of p is "<<p<< endl;
     cout <<"the value of address of a is "<< & a << endl;



     //Value of a----
     cout << "the value of a with help of deferencing operator is "<<*p<<endl ;
     cout<< " the value of a is "<< a<< endl ;
     return 0;
}