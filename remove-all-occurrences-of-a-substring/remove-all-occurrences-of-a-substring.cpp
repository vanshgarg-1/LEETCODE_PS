class Solution {
public:
    string removeOccurrences(string s, string part) {
        

    int i = 0;
    while (i < s.size() && (i + part.size()-1) < s.size())
    {
        if (s.substr(i, part.size()) == part)
        {
            s.erase(i, part.size());
            i = 0;
        }
        else
            i++;
    }
    return s;

    }
};