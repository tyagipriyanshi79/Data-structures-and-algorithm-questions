#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int *arr, int n)
{
    // base case - already sorted
    if(n==1 || n==0)
    {
        return ;
    }

    //1 case solve krlia - largest element ko end me rakh dega
    for(int i=0; i<n-1; i++)
    {
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }

    bubbleSort(arr,n-1);
}

int main(){
    int arr[5] = {4,2,5,3,1};
    int n =5;

    bubbleSort(arr,5);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}