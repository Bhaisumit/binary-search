#include<iostream>
using namespace std;
class Animal{
int voice;
public:
// agar virtual keyword na use kare toh animal ka aawaz() call hoga
 virtual void aawaz(){
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
Animal *dog;
Human sonu;
dog= &sonu;
dog->aawaz();


}