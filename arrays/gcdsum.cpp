#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
 
/* Function to get sum of digits */
ll gcd_sum(ll n)
{
    ll temp = n;
    ll digitsum =0;
    while(temp>0)
    {
        digitsum += temp%10;
        temp/= 10;
    }

    ll gcd = __gcd(n , digitsum);
    return gcd;
}
 
// Driver code
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(gcd_sum(n) != 1)
        {
            cout<<n<<"\n";
        }
        else if(gcd_sum(n+1) != 1)
        {
            cout<<n+1<<"\n";
        }
        else if(gcd_sum(n+2) != 1)
        {
            cout<<n+2<<"\n";
        }
        
    }
    return 0;
}