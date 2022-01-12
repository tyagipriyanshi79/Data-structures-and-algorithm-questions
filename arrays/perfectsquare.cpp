#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

void solve()
{ 
        ll n;
        cin>>n;
        ll a[n];
        ll flag =0;
        double ab , comp;
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(ll i=0; i<n; i++)
        {
            comp = a[i];
            ab = sqrt(comp);
            
            if(ab * ab != comp)
            {
                cout<<"YES"<<"\n";
                return;
            }
            
            
        }
        
        cout<<"NO"<<"\n";
}
int main()
{
    cout<<fixed<<setprecision(10)<<"\n";
    ll t;x
    cin>>t;
    while(t--)
    {
        solve();
    }    
    return 0;
}