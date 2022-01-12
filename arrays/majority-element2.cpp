#include <bits/stdc++.h>
using namespace std;

// second solution of hash table
   // o(n) and sc-> o(n)
  /* void findMajority(vector<int>a, int n)
   {
       unordered_map<int,int> m;
       for(int i=0; i<size; i++)
        m[a[i]]++;

        int flag = 0;
        for(auto i : m)
        {
            if(i.second > n/3)
            {
                flag = 1;
                cout<<i.first<<" ";
            }
        }
        if(flag ==0)
        cout<<-1<<"\n";
   }*/

int main()
{
    int n;
    cin>>n;
    int f=0;
    vector<int> a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    // o(n^2) and space complexibility of o(1)
    /*int count = 0;
    
    for(int i= 0; i<n; i++)
    {
        count =0;
        for(int j=i; j<n; j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
        }
        if(count>n/3)
        {
            cout<<a[i]<<" ";
            f = 1;
        }
    }
    if(f==0)
    {
        cout<<-1<<" ";
    }
    */
   
}
