#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        char a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        int i=0, j=n-1;
        while(i<=j)
        {
            swap(a[i],a[j]);
            i++;
            j--;
        }
        for(int i=0; i<n; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<"\n";
        
    }
}