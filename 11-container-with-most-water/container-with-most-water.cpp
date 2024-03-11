class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans = -1,h,w,area;
        int s = 0,e = height.size()-1;
        
        while(s<e){
            w = e-s;
            h = min(height[s],height[e]);
            if(height[s]<=height[e]){
                area = h*w;
                s++;
            }
            else{
                area = h*w;
                e--;
            }
            ans = max(ans,area);
        }
        return ans;
    }
};