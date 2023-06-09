class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ar;
        int i = 0, j = 0;
        while (i < nums1.size() && j < nums2.size()) {
            if (nums1[i] < nums2[j]) {
                ar.push_back(nums1[i]);
                i++;
            } else if (nums1[i] > nums2[j]) {
                ar.push_back(nums2[j]);
                j++;
            } else {
                ar.push_back(nums1[i]);
                ar.push_back(nums2[j]);
                i++;
                j++;
            }
        }
        while (i < nums1.size()) {
            ar.push_back(nums1[i]);
            i++;
        }
        while (j < nums2.size()) {
            ar.push_back(nums2[j]);
            j++;
        }

        int n = ar.size();
        if (n % 2 != 0) {
            int index = n / 2;
            return ar[index];
        } else {
            int index1 = n / 2 - 1;
            int index2 = n / 2;
            double ans = (ar[index1] + ar[index2]) / 2.0;
            return ans;
        }
    }
};
