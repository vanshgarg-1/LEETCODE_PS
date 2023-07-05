class Solution {
public:
    int strStr(string h, string n) {
        int ans=-1,temp;
        bool flag=true;
        for(int i=0;i<h.size();i++)
        {
            flag=true;
            temp=i;
            for(int j=0;j<n.size();j++)
            {
                if(h[temp++]!=n[j])
                {
                    flag=false;
                    break;
                }
            }
            if(flag)
             return i;

        }
        return ans;
        
    }
};