class Solution {
public:

    int notpresent(vector<int> ans , int n){
        for(int i=0;i<ans.size();i++){
            if(ans[i]==n){
                return 0;
            }
        }
        return 1;
    }
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j] && notpresent(ans, nums1[i])){
                 ans.push_back(nums1[i]);   
                }
            }
        }

        return ans;
    }
};