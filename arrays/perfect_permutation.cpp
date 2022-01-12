#include<bits/stdc++.h>
using namespace std;

int main()
{
     int number;
    cin >> number;
    if(number % 2 != 0)
        cout << -1;
    else
    {
        for(int i = 0; i < number; i++){
            if(i % 2 == 0)
                cout << (i+1) + 1 << " ";
            else
                cout << (i-1) + 1 << " ";
        }
    }
}