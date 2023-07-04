class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>count;

        for(auto freq : nums){
            count[freq]++;
        }
        
        int ans = 0;

        for(auto freq : count){
            if(freq.second==1){
                ans = freq.first;
            }
        }
        return ans;
    }
};