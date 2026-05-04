#include <iostream>
using namespace std;
// SelectionSort-find min & swap with index TC-o(n^2) SC -o(1) 
void SelectionSort(int arr[],int n)
{
    int min;
    for(int i=0;i<n-1;i++)
    {
        min=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[j+1])
            {
                min=j;

            }
            
        }
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
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
    
    SelectionSort(arr,n); 
    cout<<"Sorted order: ";   
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}