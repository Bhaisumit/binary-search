#include<iostream>
using namespace std;

class base{
    private:
    int a;
    public:
    base(){
        cout<<"base";
    }
  base(int i){
        a=i;
          cout<<"inside base class";

    } 
};
class derived:public base{
    
    public:
    derived(){ // default constructor in inheritance(implicit call)
        cout<<"derived";
    }
    derived(int k):base(k){// parameterized constructor in inheritance(we have to make explicitly call)
        
        cout<<"inside derived class";
    }

};








int main(){

    derived sumit(4);

}