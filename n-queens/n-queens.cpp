class Solution {
public:

unordered_map<int, bool> rowcheck;
unordered_map<int, bool> upperleftcheck;
unordered_map<int, bool> bottomleftcheck;

 bool issafe(int row,int col,vector<string>&visited ,int n){
    if (rowcheck[row] == true)
    {
        return false;
    }
    if (upperleftcheck[n - 1 + col - row] == true)
    {
        return false;
    }
    if (bottomleftcheck[col + row] == true)
    {
        return false;
    }

    return true;
}

void solve(int col,vector<string>&visited,vector<vector<string >>&ans,int n){
    if (col >= n)
    {
        ans.push_back(visited);
        return;
    }

    for (int row = 0; row < n; row++)
    {
        if (issafe(row, col, visited, n))
        {
            visited[row][col] = 'Q';
            rowcheck[row] = true;
            upperleftcheck[n - 1 + col - row] = true;
            bottomleftcheck[row + col] = true;

           solve(col+1,visited,ans,n);

            visited[row][col] = '.';
            rowcheck[row] = false;
            upperleftcheck[n - 1 + col - row] = false;
            bottomleftcheck[row + col] = false;
        }
    }
}

    vector<vector<string>> solveNQueens(int n) {
    vector<vector<string>>ans;
       string s(n,'.');
        vector<string>visited(n);
        for(int i=0;i<n;i++){
            visited[i]=s;
        }
       
        solve(0,visited,ans,n);
        return ans;
    }
};