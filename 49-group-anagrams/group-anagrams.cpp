class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& str) {
        map<string,vector<string>> mp;
        vector<vector<string>> result;
        for(int i=0;i<str.size();i++)
        {
            string temp=str[i];
            sort(temp.begin(),temp.end());
            mp[temp].push_back(str[i]);
        }

        for(auto i:mp)
        {
            result.push_back(i.second);
        }

        return result;
    }
};