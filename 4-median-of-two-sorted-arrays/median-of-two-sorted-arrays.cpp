class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        vector<int> nums;
        double med=0;
        for(int i=0;i<nums1.size();i++)
        {
            int k;
            k=nums1[i];
            nums.push_back(k);

        }
         for(int j=0;j<nums2.size();j++)
        {
            int k;
            k=nums2[j];
            nums.push_back(k);
        }
        sort(nums.begin(),nums.end());
        int p=nums.size();
        if(p%2==0)
        {
            int a=(p/2);
            int b=a+1;
            med=(nums[a-1]+nums[b-1])/2.0;
        }
        else
        {
            int k=(p+1)/2;
            med=nums[k-1];
        }
        return med;
    }
};