#include<bits/stdc++.h>
using namespace std;

bool checkpalindrome(string& str, int i){
    //base case
    int n = str.length();
    if(i>n-i-1)
    {
        return true;
    }

    if(str[i]!=str[n-i-1])
    
        return false;
     else{
     return checkpalindrome(str,i+1);
    }
}

int main()
{
    string name = "abcd";
    cout<<endl;

    bool ispalindrome = checkpalindrome(name, 0);

    if(ispalindrome){
        cout<<"its a palindrome"<<endl;
    }
    else{
        cout<<"its not a palindorme"<<endl;
    }
}