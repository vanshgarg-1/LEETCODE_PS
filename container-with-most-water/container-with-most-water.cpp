class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int maxi = 0;
        while(left < right){

            int width = right - left;
            int heightc = min(height[left], height[right]);
            int area = heightc * width;
            maxi = max(maxi, area);

            if(height[left] < height[right]) left++;

            else if(height[left] > height[right]) right--;

            else {
                left++;
                right--;
            }
        }
        
        return maxi;
    }
};