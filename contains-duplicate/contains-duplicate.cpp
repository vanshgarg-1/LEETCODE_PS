class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<long,long>map;
        for(int i=0;i<nums.size();i++){
            map[nums[i]]++;   
        }
        for(int i=0;i<nums.size();i++){
            if(map[nums[i]]>1){
                return true;
            }
        }
        return false;
    }
};