class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        

        int x=1;
        for(int i=0;i<target.size();i++){
            if(x<target[i]){
                ans.push_back("Push");
                ans.push_back("Pop");
                x++;i--;
            }else{
                ans.push_back("Push");
                x++;
            }
        }
        
        return ans;
        
    }
};