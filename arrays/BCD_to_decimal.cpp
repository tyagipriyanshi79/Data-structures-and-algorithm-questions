#include <bits/stdc++.h>
using namespace std;
 
// Function to convert BCD to Decimal
int bcdToDecimal(string s)
{
    int len = s.length(),
        check = 0, check0 = 0;
    int num = 0, sum = 0,
        mul = 1, rev = 0;
 
    // Iterating through the bits backwards
    for (int i = len - 1; i >= 0; i--) {
 
        // Forming the equivalent
        // digit(0 to 9)
        // from the group of 4.
        sum += (s[i] - '0') * mul;
        mul *= 2;
        check++;
 
        // Reinitialize all variables
        // and compute the number.
        if (check == 4 || i == 0) {
            if (sum == 0 && check0 == 0) {
                num = 1;
                check0 = 1;
            }
            else {
                // update the answer
                num = num * 10 + sum;
            }
 
            check = 0;
            sum = 0;
            mul = 1;
        }
    }
 
    // Reverse the number formed.
    while (num > 0) {
        rev = rev * 10 + (num % 10);
        num /= 10;
    }
 
    if (check0 == 1)
        return rev - 1;
 
    return rev;
}
 
// Driver Code
int main()
{
    string s;
    cin>>s;
 
    // Function Call
    cout << bcdToDecimal(s);
 
    return 0;
}