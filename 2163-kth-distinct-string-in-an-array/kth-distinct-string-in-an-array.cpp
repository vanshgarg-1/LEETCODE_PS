class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int> mpp;
        const int m = arr.size();
        for(int i=0;i<m;++i){
            ++mpp[arr[i]];
        }
        for(int i=0;i<m;++i){
            if(mpp[arr[i]]==1){
                --k;
                if(k==0){
                    return arr[i];
                }
            }
        }
        return "";        
    }
};