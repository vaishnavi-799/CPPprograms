#include<iostream>
using namespace std;
void ReverseArray(int* arr,int size)
{
    
    int i=0;
    int j=size-1;
    while(i<j)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    
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
    ReverseArray(arr,n);
    cout<<"Reversed array is: ";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}