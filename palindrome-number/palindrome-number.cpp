class Solution {
public:
    bool isPalindrome(int x) {
        string num = to_string(x);
        int len = num.size(); 
        int start = 0;
        int end = len - 1;

        if (x < 0) {
          return false;
        }

        while (start < end) {
          if (num[start] != num[end]) {
            return false;
          }
          start ++;
          end --;
        }
        return true;
    }
};