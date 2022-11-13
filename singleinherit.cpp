#include<iostream>
using namespace std;

class A{
int a;
public:
 int get(){
    return this->a;
}
};

class B:public A{
int b;
public:
int getb(){
return this->b;
}
};







int main(){
    B value;
   cout<< value.getb();
cout<<value.get();
}