class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_map<char, bool>> rows(9);
        vector<unordered_map<char, bool>> cols(9);
        vector<unordered_map<char, bool>> boxes(9);
        for (int r = 0; r < 9; ++r) {
            for (int c = 0; c < 9; ++c) {
                if (board[r][c] != '.') {
                    char num = board[r][c];
                    int boxIndex = (r / 3) * 3 + (c / 3);
                    if (rows[r][num] || cols[c][num] || boxes[boxIndex][num]) {
                        return false;}
                    rows[r][num] = true;
                    cols[c][num] = true;
                    boxes[boxIndex][num] = true;
                }
            }
        }
        return true;
    }
};