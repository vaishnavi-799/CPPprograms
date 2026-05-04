#include <iostream>
using namespace std;
// BubbleSort-comparing adj and swap TC-o(n^2) SC -o(1) 
void BubbleSort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }
            
        }
}
int main()
{
    int arr[100];
    int n,key;
    cout<<"Enter no of elements: ";
    cin>>n;
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    BubbleSort(arr,n); 
    cout<<"Sorted order: ";   
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}