#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n ;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    for(int i=n-2; i>=0; i--)
    {
        int temp = arr[i+1];
        arr[i+1] = arr[i];
        arr[i] = temp;
    }

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}