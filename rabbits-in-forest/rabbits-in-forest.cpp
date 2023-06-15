class Solution {
public:
int numRabbits(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    
    int rabbits=0;
    int prevRabbit=0;
    int stretch=0;
    for(int i=0;i<nums.size();++i){
        if(nums[i]==0){
            rabbits++;
            continue;
        }
        if(prevRabbit < nums[i]+1){
            rabbits+=nums[i]+1;
            prevRabbit=nums[i]+1;
            stretch=1;
        }
        else{
            if(stretch == prevRabbit){
                rabbits+=nums[i]+1;
                prevRabbit=nums[i]+1;
                stretch=1;
            }
            else stretch++;
        }
    }
    return rabbits;
}
};