class Solution {
public:
    int minimumPushes(string word) {
        vector<int> fre(26,0);

        for(int i = 0; i<word.length(); i++){
            fre[word[i] - 'a']++;
        }

        sort(fre.begin(), fre.end(), greater<int>());
        int ans = 0;
        for(int i = 0; i<26; i++){

            if(i>=0 && i<=7){
                ans+= fre[i];
            }
            if(i>=8 && i<=15){
                ans+= 2*fre[i];
            }
            if(i>=16 && i<=23){
                ans+=3*fre[i];
            }
            if(i>=24){
                ans+=4*fre[i];
            }

        }

        return ans;


    }
};