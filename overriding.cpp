#include<iostream>
using namespace std;
class Animal{
int voice;
public:

  void aawaz(){
    cout<<"bau- bau"<<endl;
}
};

class Human:public Animal {

int sound;
public:
void  aawaz(){
    cout<<"kya aawaz hai"<<endl;
}
};
int main(){
    Human sonu;
    sonu.aawaz();
}