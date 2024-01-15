#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node *next;
    node(int value)
    {
        data=value;
        next=NULL;
    }
};
int main()
{
    node *head;
    head = NULL;

    int arr[]={2,4,6,8,10};
    //insert the node at beginning 
    //linklist does not exist
    for(int i=0;i<5;i++)
    {
    if(head==NULL)
    {
        head=new node(arr[i]);
    }
    //linked list exist karti
    else
    {
        node *temp;
        temp=new node(arr[i]);
        temp->next = head;
        head=temp;

    }
  }
  //print the vlaue
  node *temp=head;
  while(temp!=NULL)
  {
    cout<<temp->data<<" ";
    temp=temp->next;
  }
}