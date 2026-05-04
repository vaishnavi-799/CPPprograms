#include <iostream>
using namespace std;
int main() {
    int arr[100]={1,2,3,4,5};
    int n=5;
    int val;
    cout<<"How many times to rotate: ";
    cin>>val;
    int ii=0;
    while(ii<val)
    {
        int last=arr[n-1];
        for(int i=n;i>=0;i--)
        {
            arr[i]=arr[i-1];
        }
        arr[0]=last;
        ii++;
    }
    
   
    for(int j=0;j<n;j++)
        cout<<arr[j]<<" ";
    
    
    return 0;
}