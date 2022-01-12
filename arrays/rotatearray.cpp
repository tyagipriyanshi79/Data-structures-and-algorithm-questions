#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n,d;
   cin>>n>>d;
   int a[n];
   for(int i=0; i<n; i++)
   {
       cin>>a[i];
   }

   for(int i=0; i<d; i++)
   {
       for(int j=i; j<n; j++)
       {
           int temp = a[j];
           a[j] = a[j+1];
           a[j+1] = temp;
       }
   }
   for(int i=0; i<n; i++)
   {
       cout<<a[i]<<endl;
   }
}