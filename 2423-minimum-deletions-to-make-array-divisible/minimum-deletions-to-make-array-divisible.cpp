class Solution {
public:
    int gcd(int a,int b){
        if(b==0){
            return a;
        }
        return gcd(b,a%b);
    }
    int minOperations(vector<int>& nums, vector<int>& numsDivide) {
        int value=numsDivide[0];
        for(int i=1;i<numsDivide.size();i++){
            value=gcd(value,numsDivide[i]);
        }
        int mini=INT_MAX;
        int mini_index=-1;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                return 0;
            }
            if(value%nums[i]==0 && value<mini){
               mini=value;
               mini_index=i;
            }
        }
        return mini_index;


    }
};