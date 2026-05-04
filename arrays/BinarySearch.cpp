#include <iostream>
using namespace std;
// Linear Search-Works on unsorted arr TC-o(n) SC -o(1)
// Binary Search-Works on sorted arr TC-o(log n) SC -o(1og n)
int search(int arr[],int l,int h, int key)
{
    if(l>h)
    {
        return -1;
    }
    int mid;
    mid=(l+h)/2;
    if(key<arr[mid])
        return search(arr,l,mid-1,key);
    else if(key>arr[mid])
        return search(arr,mid+1,h,key);    
    else if(key==arr[mid])
        return mid;
    return -1;    
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
    cout<<"Enter element to search: ";
    cin>>key;
    int index=search(arr,0,n-1,key); 
    cout<<"found at index "<<index;   

}