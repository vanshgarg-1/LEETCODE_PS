class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& v, int k) {
        int n = v.size();

        multiset<int> test;
        vector<int> ans;

        for(int i = 0;i < k;i++)
            test.insert(v[i]);
        
        ans.push_back(*test.rbegin());

        for(int i = k;i < n;i++){

            test.insert(v[i]);

            test.erase(test.find(v[i-k]));

            ans.push_back(*test.rbegin());
        }
        return ans;
    }
};