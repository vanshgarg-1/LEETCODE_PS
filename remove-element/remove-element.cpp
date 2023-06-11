class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count = 0;
        vector<int> copy;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                copy.push_back(nums[i]);
                count++;
            }
        }

        for (int i = 0; i < count; i++) {
            nums[i] = copy[i];
        }

        return count;
    }
};
