class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        reverse(nums.begin(),nums.end());
        int count=0;
        int answer=nums[0];
        for(int i =1;i<nums.size();i++){
               if(nums[i]!=nums[i-1]){
                   count++;
                   if(count==2){
                   answer= nums[i];
                   break;
                   }
                   
        }
        if(count<2){
            answer=nums[0];

        }
        
       
    }
 return answer;}
};