class Solution {
public:
    bool isValid(string s) {
        int N = s.length();
        stack<char> q;

        for (int i=0; i<N; i++) {
            if (!q.empty()) {
                int diff = s[i] - q.top();
                if (diff == 1 || diff == 2) {
                    q.pop();
                    continue;
                }
            }
            q.push(s[i]);
        }

        return q.empty();
    }
};