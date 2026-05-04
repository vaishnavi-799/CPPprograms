#include <iostream>
using namespace std;
int main() {
    int arr[100]={1,2,3,4,5};
    int n=5;
    int val,pos;
    cout<<"Enter a number and position to insert: ";
    cin>>val;
    cout<<" ";
    cin>>pos;
    int i;
    pos=pos-1;
    for(i=n;i>=pos;i--)
    {
        arr[i]=arr[i-1];
        
    }
    arr[pos]=val;
    for(int j=0;j<=n;j++)
        cout<<arr[j]<<" ";
    
    
    return 0;
}