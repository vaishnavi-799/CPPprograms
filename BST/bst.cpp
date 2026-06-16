// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;
class Node{
    public:
    int data;
    Node* left,*right;
    
    Node(int n)
    {
        data=n;
        left=right=NULL;
    }
};
Node* InsertNode(Node *root,int num)
{
    Node *newNode=new Node(num);
    if(root==NULL)
        return newNode;
    if(root->data>num)
        root->left=InsertNode(root->left,num);
    else
        root->right=InsertNode(root->right,num);
        
    return root;    
}
int Search(Node *root,int num)
{
    if(!root) return -1;
    if(root->data==num)
        return 1;
    if(root->data>num)
        return Search(root->left,num);
    
        return Search(root->right,num);
      
   // return -1;    
}
void display(Node *root)
{
    if(root==NULL) return ;
    display(root->left);
    cout<<root->data<<" ";
   display(root->right);
}
int main() {
    vector<int > arr={5, 9, 2, 5};
    Node* root=NULL;
    root=InsertNode(root,40);
     root=InsertNode(root,20);
      root=InsertNode(root,50);
       root=InsertNode(root,10);
    cout<<Search(root,50);
}