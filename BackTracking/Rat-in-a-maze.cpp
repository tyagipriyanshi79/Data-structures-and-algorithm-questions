#include<bits/stdc++.h>
using namespace std;
#define MAX 5

// Time compexity is O(4^(n*n)) because we have 4 calls for every every cell in a matrix
// Space complexity is O(1)
// Brute-force Solution
/*void getAllPAth(vector<vector<int>>& grid,int n, int row , int col , vector<string>& ans, string curr)
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
*/
//efficient solution 
//TC = O(3^(n*n)) & sc - O(1);
vector<string> res;

bool isValid(int row , int col , int m[][MAX], int n)
{
    if(row>=0 and row < n and col>=0 and col<n and m[row][col]==1){
        return true;
    }

    return false;
}

void findHelper(int m[][MAX], int n, int x, int y, int dx[], int dy[], string path)
{
    if(x== n-1 and y==n-1)
    {
        res.push_back(path);
        return;
    }

    string dir = "DLRU";
    for(int i=0; i<4; i++)
    {
        int row = x+dx[i];
        int col = y+dy[i];

        if(isValid(row, col, m,n)){
            m[row][col] = 2;

            findHelper(m,n,row, col, dx, dy, path+dir[i]);

            m[row][col] = 1;
        }
    }
}

vector<string> findPath(int m[][MAX], int n)
{
    int dx[] = {1,0,0,-1};
    int dy[] = {0,-1,1,0};
    if(m[0][0] == 1){
        m[0][0] = 2;
        findHelper(m,n,0,0,dx,dy,"");
    }
    return res;
}


int main()
{
    int m[MAX][MAX] = { {1,0,0,0},
{1,1,0,1},
{1,1,0,0},
{0,1,1,1} };

    int n = sizeof(m)/sizeof(m[0]);

    findPath(m,n);

    for(int i=0; i<res.size(); i++)
    {
        cout<<res[i]<<' ';
    }
    return 0;
}