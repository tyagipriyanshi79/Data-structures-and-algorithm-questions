#include<bits/stdc++.h>
using namespace std;

void reverse(string& str, int i)
{
    //cout<<"call recieved for "<<str<<endl;
    //base case
    int n = str.length();
    if(i>n-i-1)
    {
        return;
    }
    swap(str[i],str[n-i-1]);
    i++;
    //Recursive call
    reverse(str,i);
    //cout<<"call recieved for "<<str<<endl;
}

int main()
{
    string name = "abdcde";
    cout<<endl;
    reverse(name, 0);
    cout<<endl;
    cout<<name<<endl;
}