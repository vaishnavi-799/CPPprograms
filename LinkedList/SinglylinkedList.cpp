#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* link;
    
    Node(int d)
    {
        data=d;
        link=NULL;
    }

};
class LinkedList
{
    Node* head;
    public:
    LinkedList()
    {
        head=NULL;
    }
    void addAtEnd(int n)
    {
        Node *newNode=new Node(n);
        Node *temp=head;
        if(temp==NULL)
        {
            head=newNode;
            //cout<<head->data<<endl;
            return ;
        }
        while(temp->link)
        {
            temp=temp->link;
        }
        temp->link=newNode;
        //head=temp;
        //cout<<head->data<<endl;
    }
    void addAtBegin(int n)
    {
        Node* newNode=new Node(n);
        if(head==NULL)
        {
            head=newNode;
            return ;
        }
        
            newNode->link=head;
            head=newNode;   
    }
    void deleteEnd()
    {
        Node* temp=head;
        Node* prev=NULL;
        if(temp->link==NULL)
        {
            head=NULL;
        }
        while(temp->link!=NULL)
        {
            prev=temp;
            temp=temp->link;
        }

        prev->link=NULL;

    }
    void display()
    {
        Node* temp=head;
        if(temp==NULL)
        {
            cout<<"Empty"<<endl;
            return ;
        }
        while(temp != NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->link;
        }
    }
    
};
int main()
{

    LinkedList ll;
    ll.addAtBegin(8);
    ll.addAtBegin(2);
    ll.addAtBegin(3);
    ll.addAtBegin(4);
    ll.deleteEnd();
     
    ll.display();
    return 0;
}