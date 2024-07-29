class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) {
            return {};
        }

        // Mapping the digits to their corresponding letters
        unordered_map<char, string> digitMapping = {
            {'2', "abc"}, {'3', "def"}, {'4', "ghi"},
            {'5', "jkl"}, {'6', "mno"}, {'7', "pqrs"},
            {'8', "tuv"}, {'9', "wxyz"}
        };

        vector<string> combinations;
        backtrack(0, "", digits, digitMapping, combinations);
        return combinations;
    }

private:
    void backtrack(int index, string path, const string& digits,
                   const unordered_map<char, string>& letters,
                   vector<string>& combinations) {
        // If the length of path and digits is same, we have a complete combination
        if (path.size() == digits.size()) {
            combinations.push_back(path);
            return;
        }

        // Get the list of letters using the index and digits[index]
        string possibleLetters = letters.at(digits[index]);

        for (char letter : possibleLetters) {
            // Add the current letter to the path and recursively explore the next digit
            backtrack(index + 1, path + letter, digits, letters, combinations);
        }
    }
};