class Solution {
public:
    double myPow(double x, long long int n) {
        //base case
        if(n==0){
            return 1;
        }

        //recursive call
        double smallprob=pow(x,n-1);
        double bigprob=x*smallprob;

        return bigprob;
    }
};