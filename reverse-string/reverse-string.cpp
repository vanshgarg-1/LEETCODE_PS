class Solution {
public:
    void reverseString(vector<char>& s) {

     int start=0;
     int  end = s.size()-1;
     int temp;
     // IN CASE OF NO SWAP FUNCTION
     while(start<end){
         temp=s[end];
         s[end]=s[start];
         s[start]=temp;
         start++,end--;
     }   
    }
};