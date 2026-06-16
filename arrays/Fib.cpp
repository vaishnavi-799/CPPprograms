// Ofibachi
#include <iostream>
using namespace std;

int  fibnachi(int n)
{
    if(n==1 || n==0)
        return n;
   return fibnachi(n-1)+fibnachi(n-2); 
    
}
int main() {
    int n;
    cout<<"Enter n: ";
    cin>>n;
    
    for(int i=0;i<n;i++)
        cout<<fibnachi(i)<<" ";
    return 0;
}