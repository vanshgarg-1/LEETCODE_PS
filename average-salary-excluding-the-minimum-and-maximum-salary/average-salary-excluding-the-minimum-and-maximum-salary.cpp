class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(),salary.end());
        double sum=0;
        double ans=0.0000;
        int n =salary.size();
        
        for(int i=1;i<(n-1);i++){
            sum=sum+salary[i];
        }

        ans=sum/(salary.size()-2);
        return ans;
        
    }
};