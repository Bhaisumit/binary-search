 /*Ambiguity in Multiple Inheritance in C++ is the most common problems occur when we override the functions and we inherit the classes with multiple inheritance.

For example, if we suppose that two-parent classes have the same function which is not overridden in child class.

If you try to call the function using the object of the child class, then the compiler shows error. This problem occurs due to a reason that compiler doesn’t know anything that which function to be called. For example,*/

#include<iostream>
using namespace std;
class joker{
    public:
    void kuch(){
        cout<<"nothing has done";
    }
};
class pika{
    public:
    void kuch(){
        cout<<"pikachu";
    }
};

class bhai:public joker,pika{

};






int main(){

bhai sonu;
sonu.joker::kuch();




}
