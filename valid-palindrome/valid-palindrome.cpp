class Solution {
private:

bool valid(char ch){
    if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')||(ch>='0'&&ch<='9')){
        return 1;
    }
    else{
        return 0;
    }
}

char tolower(char ch){
    
    if((ch>='a'&&ch<='z')||(ch>='0'&&ch<='9')){
        return ch;
    }
    else{
       char n = ch + 'a' -'A';
        return n;
    }
}
bool checkpalindrome(string s){
    int start=0;
    int end = s.length()-1;

    while(end>start){
        if(s[start]==s[end]){
            start++;
            end--;
        }
        else{
            return 0;
        }
    }
    return 1;
}

public:
    bool isPalindrome(string s) {
        
        string temp = "";


        for(int j=0;j<s.length();j++){
            if(valid(s[j])){
                temp.push_back(s[j]);
            }
        }

        for(int j=0;j<temp.length();j++){
            temp[j] = tolower(temp[j]);
        }

        return checkpalindrome(temp);
    }
};