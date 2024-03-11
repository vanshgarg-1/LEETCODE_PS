class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int n=arr.size();
        int low=0;
        int high=n-1;
        while(low<=high)
        {
        if(arr[low]+arr[high]==target)
        {
            return {low+1,high+1};
        }
    else if(arr[low]+arr[high]>target)
    {
        high--;
    }
            else
            {
                low++ ;
            }
        }
      return {};
    }
};