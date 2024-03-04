class Solution {
public:
bool vaild_ch(char ch)
{
    if( (ch>='a'&& ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9') )
          return 1;
   else
       return 0;
}

char tolower(char ch)
{
    if( (ch>='a'&& ch<='z')  || (ch>='0' && ch<='9'))
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkpalindrom(string a)
{
    int s=0;
    int e=a.length() - 1 ;

    while(s<=e)
    {
        if(a[s]!=a[e]){
        return 0;
        }

        else{
        s++; 
        e--;
    }
    }
    return 1;
}

    bool isPalindrome(string s) {

    string temp="";

    for(int j=0;j<s.length();j++)
    {
        if(vaild_ch(s[j]))
        {
            temp.push_back(s[j]);
        }
    }

    for(int j=0;j<temp.length();j++)
    {
        
            temp[j]=tolower(temp[j]);

    }

    return checkpalindrom(temp);


    }
};