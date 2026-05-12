class Solution {
public:
    bool isValid(string s) {
       vector<char> st;

        for (int i=0; i<s.length(); i++) 
        {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') 
            {
                st.push_back(s[i]);
            }
            else 
            {
                if (st.empty()) 
                {
                    return false;
                }
                char top = st.back();
                if ((s[i] == ')' && top != '(') || (s[i] == '}' && top != '{') || (s[i] == ']' && top != '[')) 
                {
                    return false;
                }
                st.pop_back();
            }
        }
        return st.empty();
    }
};
