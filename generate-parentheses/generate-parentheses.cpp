class Solution {
public:

    void solve(vector<string> &ans , int n , int open ,string output, int close){

        if(open ==0 && close==0){
            ans.push_back(output);
            return ;
        }

        if(open>0){
            output.push_back('(');
            solve(ans,n,open-1,output,close);
            output.pop_back();
        }

        if(close>open){
            output.push_back(')');
            solve(ans,n,open , output,close-1);
            output.pop_back();
        }


    }

    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string output ="";
        int open = n;
        int close = n;
        solve(ans, n, open ,output, close);
        return ans;
    }
};