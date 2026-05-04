#include<iostream>
using namespace std;
void MinMax(int* arr,int size)
{
    
    int i=0;
    int min,max;
    min=max=arr[0];
    for(i=0;i<size;i++)
    {
        if(max<arr[i])
            max=arr[i];
        if(min>arr[i])
            min=arr[i];    
    }
     cout<<"min and max of array: "<<max<<" "<<min<<endl;
    
}
int main()
{
   
    int n;
    cout<<"Enter a number of elements:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter "<<i+1<<"th element: ";
        cin >>arr[i];
    }
    cout<<endl;
    MinMax(arr,n);
   
    
}