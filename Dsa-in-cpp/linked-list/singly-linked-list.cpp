#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};


int main()
{
    Node *head;
    head = NULL;

   

    int arr[] = {2,4,6,8,10};

    // insert the node at beginning
    // linked list doesn't exist
    for(int i=0;i<5;i++)
    {
    if(head == NULL)
    {
        head = new Node(arr[i]);
    }
    // linked list exist
    else
    {
        Node *temp;
        temp = new Node(arr[i]);
        temp->next = head;
        head = temp;
    }
    }

    // print the value

     Node *temp = head;
     while (temp!=NULL)
     {
        cout<<temp->data<<" ";
        temp = temp->next;
     }
     

    
}

