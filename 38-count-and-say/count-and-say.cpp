class Solution {
    private:
    string say(string a){
        int i=0,j=0,cnt=0;
        string ans="";
        for(int j=0;j<a.length();j++){
            if(a[i]==a[j]) cnt++;
            else{
                
                ans+=char(cnt+'0');
                ans+=a[i];
                i=j;
                cnt=1;
            }
        }
         ans+=char(cnt+'0');
         ans+=a[i];
         return ans;
    }
public:
    string countAndSay(int n) {
        if(n==1) return "1";
        string temp="1";
        int k=1;
        while(k<n){
            temp = say(temp);
            k++;
        }
        return temp;
    }
};