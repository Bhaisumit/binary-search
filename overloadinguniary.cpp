#include<iostream>
using namespace std;

class test{
 int a;

 public:
 test(){
     a= 0;
 }
 void operator++(int){
   a++;
 }
void operator--(int){
a--;
}



 
void show(){

    cout<<"the value of a="<< a <<endl;
}
};



int main(){
test t;
t.show();
t++;
t.show();
 }