class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int zero = 0;
        int ones = 0;
        int twos = 0;

        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){  zero++; }
            else if(nums[i]==1){  ones++; }
            else if(nums[i]==2){  twos++; }
        }

        int i=0;
        while(zero--){
            nums[i++] = 0;
        }
        while(ones--){
            nums[i++] = 1;
        }
        while(twos--){
            nums[i++] = 2;
        }


    }
};