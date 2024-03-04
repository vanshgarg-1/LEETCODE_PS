class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res;
        int cur = 1;
        for(int i=0; i<nums.size(); i++) {
            res.push_back(cur);
            cur *= nums[i];
        }
        cur = 1;
        for(int i=nums.size()-1; i>=0; i--) {
            res[i] *= cur;
            cur *= nums[i];
        }
        return res;
    }
};