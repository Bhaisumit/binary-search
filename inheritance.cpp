#include<iostream>

using namespace std;
class aboutperson
{
private:


    int birthdate;
    int daysleft;
public:

 string favrtfood;

void getdate(){
    birthdate=4;
}

void Daysleft(){
    daysleft= 44556;
    }
void full(){
    cout<<"the birthdate is "<< birthdate<<endl;
    cout<<" days left is"<< daysleft<<endl;
}

};
class uniqueperson: public  aboutperson{
public:
int myhobbie; };


int main(){

aboutperson monu;
monu.favrtfood="appl";
monu.getdate() ;
monu.Daysleft() ;
monu.full();
uniqueperson Sumit;
   
Sumit.full();
 
}