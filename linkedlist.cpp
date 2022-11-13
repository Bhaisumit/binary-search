#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};
void insertattail(Node *&head, int val)
{
    Node *n = new Node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }

    Node *temp = head;
    while (temp->next != NULL)
    {

        temp = temp->next;
    }
    temp->next = n;
}
void insertathead(Node *&head, int val)
{
    Node *n = new Node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    n->next = head;
    head = n;
}

void display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "Null" << endl;
}
Node *reverse(Node* &head){
    
    Node*previous=NULL;
    Node*current=head;
    Node*next=NULL;
    while(current!=NULL){
        next=current->next;
        current->next=previous;
        previous=current;
        current=next;
    }
    head=previous;
    
}
int main()
{

    Node *head = NULL;
    insertathead(head, 8);
    insertathead(head, 2);
    insertathead(head, 3);
    insertathead(head, 4);
    
    display(head);
    reverse(head);
    display(head);
    return 0;
}