#include <iostream>
using namespace std;
// InsertionSort-temp<prev insert TC-o(n^2) SC -o(1) 
void InsertionSort(int arr[],int n)
{
    int temp;
    for(int i=1;i<n;i++)
    {
        temp=arr[i];
        int j=i-1;
        
        while(j>=0 && arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
        
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
    
    InsertionSort(arr,n); 
    cout<<"Sorted order: ";   
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}