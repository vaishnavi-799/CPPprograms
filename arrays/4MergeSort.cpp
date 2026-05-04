#include <iostream>
using namespace std;
// MergeSort- divide & conqure TC-o(n^2) SC -o(1) 
void merge(int arr[],int l,int mid,int h)
{
    int i = l;
        int j = mid + 1;
        int k = 0;

        int temp[h - l + 1];

        while (i <= mid && j <= h) {
            if (arr[i] <= arr[j]) {
                temp[k++] = arr[i++];
            } else {
                temp[k++] = arr[j++];
            }
        }

        while (i <= mid) {
            temp[k++] = arr[i++];
        }

        while (j <= h) {
            temp[k++] = arr[j++];
        }

        for (int n = 0; n < k; n++) {
            arr[l + n] = temp[n];
        }

}
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
void merg_sort(int arr[],int l,int h)
{
    if(l<h)
    {
        int mid=(l+h)/2;
        merg_sort(arr,l,mid);
        merg_sort(arr,mid+1,h);
        merge(arr,l,mid,h);
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