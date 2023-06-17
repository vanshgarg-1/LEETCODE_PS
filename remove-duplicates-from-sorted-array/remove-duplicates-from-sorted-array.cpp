
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        // step 1 - replace duplicate element with INT_MAX or INT_MIN
        for(int i=1; i<nums.size(); i++) {
            if(nums[i] == nums[i-1]) {
                nums[i-1] = INT_MAX;
            }
        }

        // step 2 - sort the vector
        sort(nums.begin(), nums.end());

        // step 3 - count the element which is not INT_MAX or INT_MIN 
        int count = 0;
        for(int i=0; i<nums.size(); i++) {
            if(nums[i] != INT_MAX) count++;
        }

        //step 3 - return count
        return count;
    }
};