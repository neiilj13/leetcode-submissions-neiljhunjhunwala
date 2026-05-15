class Solution {
public:

    string encode(vector<string>& strs) {
        string a="";
        for(int i=0; i<strs.size(); i++)
        {
            a+=strs[i];
            a+="/n";
        }
        return a;
    }

    vector<string> decode(string s) {
        vector<string> b;
        string c;
        for(int j=0; j<s.length(); j++)
        {
            if(s[j]=='/' && s[j+1]=='n')
            {
                if(b.size()>=1)
                {
                    c.erase(0, 1);
                }
                b.push_back(c);
                c="";
            }
            else
            {
                 c+=s[j];
            }
            
        }
        return b;
    }
};
