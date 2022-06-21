#include<bits/stdc++.h>
using namespace std;

void getAllPAth(vector<vector<int>>& grid,int n, int row , int col , vector<string>& ans, string curr)
{
    if(row>=n || row<0 || col>=n || col<0 || grid[row][col]==0)
    {
        return ;
    }

    if(row == n-1 and col == n-1)
    {
        ans.push_back(curr);
        return;
    }

    grid[row][col] = 0;

    getAllPAth(grid, n, row-1, col, ans, curr+"U");
    getAllPAth(grid, n, row+1, col, ans, curr+"D");
    getAllPAth(grid, n, row, col+1, ans, curr+"R");
    getAllPAth(grid, n, row, col-1, ans, curr + "L");

    grid[row][col] = 1;

    return ;
}

vector<string> findPath(vector<vector<int>>& grid, int n)
{
    vector<string> ans;
    getAllPAth(grid, n, 0,0, ans,"");
    return ans;
}
int main()
{
    int n;
    cin>>n;
    vector<vector<int>> grid(n,vector<int>(n));
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>grid[i][j];
        }
    }

    vector<string> ans = findPath(grid,n);

    for(auto i : ans)
    cout<<i<<" ";

    return 0;
}