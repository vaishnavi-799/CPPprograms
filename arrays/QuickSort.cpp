#include <iostream>
using namespace std;

int partition(int arr[], int l, int h)
{
    int pivot = arr[l];
    int i = l;
    int j = h;

    while(i < j)
    {
        do {
            i++;
        } while(i <= h && arr[i] <= pivot);

        do {
            j--;
        } while(j >= l && arr[j] > pivot);

        if(i < j)
        {
            int t = arr[i];
            arr[i] = arr[j];
            arr[j] = t;
        }
    }

    int t = arr[l];
    arr[l] = arr[j];
    arr[j] = t;

    return j;
}

void QuickSort(int arr[], int l, int h)
{
    if(l < h)
    {
        int j = partition(arr, l, h);
        QuickSort(arr, l, j-1);
        QuickSort(arr, j+1, h);
    }
}

int main()
{
    int arr[100], n;

    cout << "Enter no of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    QuickSort(arr, 0, n-1);

    cout << "Sorted order: ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
}