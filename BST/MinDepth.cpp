// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
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
Node* BuildTree(vector<int>v,int &ind)
{
    if(v[ind]==-1||ind>=v.size())
    {
        ind++;
         return NULL;
    }
       
    
    Node* newNode=new Node(v[ind++]);
    newNode->left=BuildTree(v,ind);
     newNode->right=BuildTree(v,ind);
     return newNode;
}
int min(int a,int b)
{
    return a>b?b:a;
}
int minn(Node *root)
{
    if(root==NULL)
        return 0;
    if(root->left)
        return minn(root->left)+1;
    if(root->right)
        return minn(root->right)+1;  
    return min(minn(root->left),minn(root->right))+1 ;   
}

void preorder(Node* root) {
    if (root == NULL)
        return;

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
int main() {
    vector<int>v={2,3,-1,-1,4,5};
    int ind=0;
    
    Node* root=BuildTree(v,ind);
    cout<<minn(root)<<endl;
    preorder(root);
    return 0;
}