#include <iostream>
#include<string.h>
using namespace std;
class fruit
{
private:
    int price;
    string colourname;
    string taste;

public:
    fruit()
    {
        cout << "consturctor is called" << endl;
    }

    void detail(string Taste, string Color)
    {

        taste = Taste;
        colourname =  Color;
    }

    void printdetail()
    {
        cout << "the taste of fruit is"<< endl << taste << endl;
        cout << "the color of fruit is " << endl<< colourname << endl;
    }

    ~fruit()
    {
        cout << "destructor is called";
    }
};

// fruit:: fruit(/* args */)

int main()
{
    // cout<< "my friend is very sewwt" << endl
    fruit mango;
    mango.detail("MEETHA","RED");
    mango.printdetail();

    return 0;
}