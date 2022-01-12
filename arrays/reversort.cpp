#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

void reverse(int i, int j, int* a)
{
    ll x=i;
    ll y=j;
    while(x<=y)
    {
        swap(a[x], a[y]);
        x++;
        y--;
    }
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    ll t;
    cin>>t;
    ll tc=0;
    while(t--)
    {
       
        tc++;
        ll n;
        cin>>n;
        int a[n];
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
        }
        ll  result =0 , i,j;
        
       for( i=0; i<n-1; i++)
       {
            ll idx = n-1;
                ll min = INT_MAX;
           for(j=n-1; j>=i; j--)
           {
               
                if(a[j]<min)
                {
                    min = a[j];
                    idx = j;
                }
                    
           }
           reverse(i, idx ,a);
           result+= idx-i+1;
          
       }
      


        cout<<"Case #"<<tc<<": "<<result<<"\n"; 
    }
    return 0;
}