#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void Delete(Node *point)
{
    if (!point->next)
        return;

    Node *del = point->next;
    point->next = del->next;
    point->data = del->data;

    free(del);
}
void display(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

void countEvenorOdd(Node *head)
{
    int count=0;
    while(head!=NULL)
    {
        count++;
        head=head->next;
    }
  
    if(count%2==0)
    {
        cout<<"even"<<endl;
    }
    else{
        cout<<"odd"<<endl;
    }
}

int main()
{

    /* Code here  */
    Node *head;
    Node *second;
    Node *tail;

    head = new Node;
    second = new Node;
    tail = new Node;

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = tail;

    tail->data = 30;
    tail->next = NULL;
    display(head);
    countEvenorOdd(head);

    return 0;
}