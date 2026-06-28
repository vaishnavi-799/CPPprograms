// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* link;
    
    Node(int n)
    {
        data=n;
        link=NULL;
        
    }
};
Node* addAtEnd(Node* list,int num)
{
    Node* newNode=new Node(num);
    if(list==NULL)
        return newNode;
        
    Node* temp=list;    
    while(temp->link!=NULL)
    {
        temp=temp->link;
    }
    temp->link=newNode;
    
    return list;
    
}
Node* Reverse(Node* list)
{
    Node* curr=list;
    Node* prev=NULL;
     Node* next=NULL;
     
     while(curr)
     {
         next=curr->link;
         curr->link=prev;
         prev=curr;
         curr=next;
     }
     
     return prev;
     
}
void print( Node* list)
{
     Node* temp=list;   
    while(temp)
    {
       cout<<temp->data<<" ";
       temp=temp->link;
    }
}
int main() {
    string s;
    getline(cin,s);
    
    vector<int> v;
    stringstream ss(s);
    string num;
    
    while(getline(ss,num,' '))
    {
        v.push_back(stoi(num));
    }
    Node* list=NULL;
   
    for(int i:v)
        list=addAtEnd(list,i);
    list=Reverse(list);    
      print(list);  
    return 0;
}