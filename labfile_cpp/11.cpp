// array sort

#include <iostream>
using namespace std;
int main()
{
    float temp;
    int n;
    bool check;
    cout<<"Enter the number of numbers you want to enter : ";
    cin>>n;
    float arr[n];
    for(int i = 0 ; i < n ; i++)
    {
        cout<<"Enter "<<i+1<<" element";
        cin>>arr[i];
    }
    for(int i = 0 ; i < n-1 ; i++)
    {
        if(arr[i] > arr[i+1])
        {
            check = false;
        }
    }
    if(check == false)
    {
        cout<<"The array is not in ascending order.\nSorted array : ";
    }
    else{
        cout<<"Array is in ascending order ";
    return 0;
    }
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            if(arr[i] < arr[j])
            {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            }
        }
    }
    for(int i = 0 ; i <n ; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}