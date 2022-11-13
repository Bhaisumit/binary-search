#include <iostream>
using namespace std;
#define n 100
class queue
{
    int front, rear;
    int *arr;

public:
    queue()
    {
        front = rear = -1;
        arr = new int[n];
    }
    void Enqueue(int x)
    {
        if (rear == n - 1)
        {
            // this is condition of overflow
            cout << "item did not insert" << endl;
            return;
        }
        rear++;
        arr[rear] = x;
        if (front == -1)
        {
            front++;
        }
    }
    void Dequeue()
    {
        if (front == -1 || front > rear)
        {
            cout << "item did not popped" << endl;
            return;
        }
        front++;
    }
    int peek()
    {
        if (front == -1 || front > rear)
        {
            cout << "no element in queue" << endl;
            return -1;
        }
        return arr[front];
    }
    bool empty()
    {
        if (front == -1 || front > rear)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    queue qu;

    qu.Enqueue(4);
    qu.Enqueue(6);
    qu.Enqueue(9);
    qu.Dequeue();
    cout << qu.peek() << endl;
    cout << qu.empty();
    return 0;
}