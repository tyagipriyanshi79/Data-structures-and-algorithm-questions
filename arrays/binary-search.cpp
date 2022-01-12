#include<bits/stdc++.h>
using namespace std;

int binarySearchA(int arr[],int start, int end, int key)
{
    
    while(start<=end)
    {
        int mid = start + (end-start)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]>key)
        {
            end = mid-1;
        }
        else if(arr[mid]<key)
        {
            start = mid+1;
        }
    }
    return -1;
}

int binarySearchD(int arr[], int start, int end, int key)
{
    while(start<=end)
    {
    int mid = start + (end-start)/2;
    if(arr[mid]==key)
    {
        return mid;
    }
    else if(arr[mid]<key)
    {
        end = mid-1;
    }
    else if(arr[mid]>key)
    {
        start = mid + 1;
    }
    }
    return -1;
}

int main()
{
    int arr[] = {5,10,30,20,40};
    int key = 20;
    int n =  sizeof(arr) / sizeof(arr[0]);
    int idx = -1;
    int res = 0;
    /*if(arr[0]<arr[1])
    {
     idx = binarySearchA(arr,0,n-1,key);
    }
    else if(arr[0]>arr[1])
    {
        idx = binarySearchD(arr,0,n-1,key);
    }
    cout<<idx;*/
    // last occurence of a key in an array
    int start = 0;
    int end = n-1;
    /*while(start<=end)
    {
        int mid = start + (end-start)/2;
        if(arr[mid]==key)
        {
            res = mid;
            start = mid+1;
        }
        else if(arr[mid]<key)
        {
           start = mid +1;
        }
        else 
        {
            end = mid - 1;
        }
    }
    cout<<res;*/

    // count the elements = last occurence - first occurence + 1 

    // how many times is a sorted array rotated
    // for you have to find minimum element in an rotated array

    /*while (start <= end)
    {
        int mid = start + (end - start)/2;

        if(arr[mid-1]>arr[mid] && arr[mid]<arr[mid+1])
        {
            res = mid;
            break;
        }
        else if(arr[mid]>arr[mid+1])
        {
            start = mid+1;
        }
        else{
            end = mid - 1;
        }
    }

    // for minimum element move in unsorted array :)

    // ques - > find an element in a sorted rotated array

    int p = binarySearchA(arr,0,res-1,15);
    int q = binarySearchA(arr,res,n-1,15);
    if(p!=-1)
    {
        cout<<p;
    }
    else if(q!=-1)
    {
        cout<<q;
    }
    else {
        cout<<-1;
    }*/
    
    // ques -> search in nearly sorted array

   /* while(start<=end)
    {
        int mid = start + (end - start)/2;
        if(arr[mid]==key)
        {
            cout<<mid;
            break;
        }
        if((mid-1)>=start && arr[mid-1]==key)
        {
            cout<<mid-1;
            break;
        }
        if((mid+1)<=end && arr[mid+1]==key)
        {
            cout<<mid+1;
            break;
        }
        if(arr[mid]>key)
        {
            cout<<binarySearchA(arr,0,mid-2,key);
            break;
        }
        else{
            cout<<binarySearchA(arr,mid+2,end,key);
            break;
        }
    }*/

    // find floor of an element in a sorted array

    
  
    
}