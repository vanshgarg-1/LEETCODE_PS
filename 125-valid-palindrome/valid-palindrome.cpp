class Solution {
public:
    void make_low(string &s){
        int i=0,j=0;
        int n=s.size();

        while(i<n){
            if(s[i]>='A' && s[i]<='Z'){
                s[j] = s[i] - 'A' + 'a' ;
                j++;
            }
            else if(s[i]>='a' && s[i]<='z'){
                s[j] = s[i] ;
                j++;
            }
            else if(s[i]>='0' && s[i]<='9'){
                s[j] = s[i] ;
                j++;
            }
            i++;
        }
        s=s.substr(0,j);
    }

    bool isPalindrome(string s) {
        make_low(s) ;
        int n=s.size();
        int i=0,j=n-1;
        while(i<=j){
            if(s[i] != s[j]){
                return false;
            }
            i++;
            j--;

        }
        return true;
    }
};