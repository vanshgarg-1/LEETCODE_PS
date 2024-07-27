class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& arr, int k) {
        int n=arr.size();
        // next greater index
        vector<int>NGI(n);
        stack<int>st;
        NGI[n-1]=n;
        st.push(n-1);
        for(int i=n-2; i>=0; i--){
            while(st.size()>0 && arr[st.top()]<=arr[i]){
                st.pop();
            }
            if(st.size()==0) NGI[i]=n;
            else NGI[i]=st.top();
            st.push(i);
        }
        // window maximum
        vector<int>ans;
        for(int i=0; i<n-k+1; i++){
            int Wmax=arr[i];
            int j=i;
            while(j < i+k){
                Wmax=arr[j];
                j=NGI[j];
                //j++;
            }
            ans.push_back(Wmax);
        }
        return ans;
    }
};