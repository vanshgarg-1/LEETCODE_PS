class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0;
        int pro=1;
        while(n!=0){
            int digit=n%10;
            sum=sum+digit;
            pro=pro*digit;
            n=n/10;
        }
        int ans=pro-sum;
        return ans;
    }
};