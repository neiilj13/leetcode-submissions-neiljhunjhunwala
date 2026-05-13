class Solution {
public:
    bool isAnagram(string s, string t) {
        string s1;
        if(s.length()!=t.length())
        {
            return false;
        }
        for(int i=0; i<s.length(); i++)
        {
            for(int j=0; j<t.length(); j++)
            {
                if(s[i]==t[j])
                {
                    s1+=s[i];
                    t.erase(j,1);
                    break;
                }
            }
        }
        if(s1.length()==s.length())
        {
            return true;
        }
        return false;
    }
};
