#include <iostream>
using namespace std;

int* bubbleSort(int arr[])
{
    int n  = sizeof(arr) - 1;
    for(int i = 0 ; i <= n -1 ; i++)
    {
        if(arr[i] > arr[i+1])
        {
            int temp =  arr[i];
            arr[i] = arr[i + 1];
            arr[i+1] = temp;
        }
    }
    return arr ;
}


int binarySearch(int arr[], int b, int e, int key)
{
    if(e >= b)
    {
        int mid = b + (e-b)/2 ;
        if(arr[mid] == key)
            return mid;

        else if(arr[mid] > key)
            return binarySearch(arr,b, mid - 1, key);

        else
            return binarySearch(arr, mid + 1, e, key);
    }
    return -1;

}


int main()
{
    int arr[] = { 1,20, 23, 45, 80} ;
    int n  = sizeof(arr) / sizeof(arr[0]);
    cout << "Position of 45:  "<< binarySearch(arr, 0,n, 45) << endl;
    return 0;
}
