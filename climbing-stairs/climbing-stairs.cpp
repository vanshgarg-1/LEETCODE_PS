class Solution {
public:
    int climbStairs(int n) {
    int a = 1;
        int b = 1;
        int cnt;

        for(int i = 2 ; i <= n ; i++){
            cnt = a + b;
            b = a;
            a = cnt;
        }
        return a;
    }
};