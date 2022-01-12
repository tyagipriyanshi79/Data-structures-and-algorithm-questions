#include<bits/stdc++.h>
using namespace std;

void Duplicates(string s)
{
    unordered_map<char,int> mp;
    //vector<char> v;
    for(int i=0; i<s.length(); i++)
    {
        mp[s[i]]++;
    }
    for(auto it : mp)
    {
        if(it.second > 1)
        {
            cout<<it.first<<" "<<it.second<<endl;
           // v.push_back(it.first);
        }
    }
   // return v;
}

int main()
{
    string S;
    cin>>S;
    Duplicates(S);
}