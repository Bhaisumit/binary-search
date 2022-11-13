#include <iostream>
using namespace std;
#define n 10
class stack
{
    int top;
    int *arr;

public:
    stack()
    {
        arr = new int[n];
        top = -1;
    }
    void push(int x)
    {
        if (top == n - 1)
        {
            cout << "item did not insert" << endl;
            return;
        }
        top++;
        arr[top] = x;
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "item did not popped";
            return;
        }
        top--;
    }
    int Top()
    {
        if (top == -1)
        {
            cout << "no element in stack";
            return -1;
        }

        return arr[top];
    }
    bool empty()
    {
        return top == -1;
    }
};

int main()
{
    stack st;
    cout << "process begins" << endl;
    st.pop();
    st.push(5);
    st.push(9);

    cout<<st.Top();
    
    return 0;
}