class Solution {
public:
    bool isValid(string s) {
        int l=s.length();
        for(int i=0; i<l; i++)
        {
            if(s[i]=='(' && s[l-i-1]!=')')
            {
                return false;
            }
            if(s[i]=='{' && s[l-i-1]!='}')
            {
                return false;
            }
            if(s[i]=='[' && s[l-i-1]!=']')
            {
                return false;
            }
        }
        return true;
    }
};
