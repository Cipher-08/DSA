#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

int main()
{

    /* Code here  */
    Node *head;
    Node *second;
    Node *third;
    Node *last;

    head = new Node;
    second = new Node;
    third = new Node;
    last = new Node;

    head->data = 10;
    head->next = second;
    second->data = 20;
    second->next = third;
    third->data = 30;
    third->next = last;
    last->data = 40;
    last->next = NULL;

    Node *head1;
    Node *second1;
    Node *third1;
    Node *last1;

    head1 = new Node;
    second1 = new Node;
    third1 = new Node;
    last1 = new Node;

    head1->data = 15;
    head1->next = second1;
    second1->data = 21;
    second1->next = third1;
    third1->data = 32;
    third1->next = last1;
    last1->data = 36;
    last->next = NULL;

    return 0;
}