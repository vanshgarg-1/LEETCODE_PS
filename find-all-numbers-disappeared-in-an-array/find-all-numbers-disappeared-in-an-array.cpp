class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> isthere(nums.size()+1,0);
        vector<int> ans;

        for(int i=0;i<nums.size();i++){
            isthere[nums[i]]=1;
        }
        for(int i=1;i<isthere.size();i++){
            if(isthere[i]==0){
                ans.push_back(i);
            }
        }

        return ans;
    }
};