#include <iostream>
using namespace std;
int main() {
    int arr[100]={1,2,3,4,5};
    int n=5;
    int val,pos;
    cout<<"Enter  number to delete: ";
    cin>>val;
    
    int i;
    pos=pos-1;
    for(i=0;i<n;i++)
    {
        if(arr[i]==val)
            for(int j=i;j<n;j++)
                arr[j]=arr[j+1];
        
    }
   
    for(int j=0;j<n-1;j++)
        cout<<arr[j]<<" ";
    
    
    return 0;
}