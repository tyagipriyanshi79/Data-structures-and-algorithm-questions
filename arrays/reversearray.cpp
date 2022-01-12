#include<bits/stdc++.h>
using namespace std;

void reverseArray(int a[], int start, int end)
{
    if(start>=end)
    return;
    int temp = a[start];
    a[start] = a[end];
    a[end] = temp;
    reverseArray(a,start+1,end-1);
}
void printarray(int a[], int size)
{
    for(int i=0; i<size;i++)
    {
        cout<<a[i]<<" ";
        cout<<"\n";
    }
}
int main()
{
    int n;
    cout<<"enter n"<<"\n";
    cin>>n;
    int a[n];
    for(int i=0;i<n; i++)
    {
        cin>>a[i];
    }

    reverseArray(a,0,n-1);
    cout<<"reverse array"<<" ";
    printarray(a,n);

    return 0;
}