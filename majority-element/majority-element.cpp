class Solution {
public:
int majorityElement(vector<int>& nums) {
    int count = 0;
    int arrayElement = 0;
    for(auto num : nums){
        if(count == 0){
            arrayElement = num;  //only when count is 0 then we change our arrayElement index
        }
        if(arrayElement == num){
            count++; 
        }
        else{
            count--; //as long as count is greater than 0 we are  not changeing the arrayElement value
        }
    }
    return arrayElement;
}
};