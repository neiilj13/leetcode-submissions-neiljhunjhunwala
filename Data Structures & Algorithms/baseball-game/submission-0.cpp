#include <string>
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> ops;
        for(size_t i=0; i<operations.size(); i++)
        {
            if(operations[i]=="+")
            {
                int plus= ops[ops.size()-2] + ops[ops.size()-1];
                ops.push_back(plus);
            }
            else if(operations[i]=="D")
            {
                int d_score=2*ops[ops.size()-1];
                ops.push_back(d_score);
            }
            else if(operations[i]=="C")
            {
                ops.pop_back();
            }
            else
            {
                ops.push_back(stoi(operations[i]));
            }
        }
        int sum=0;
        for(size_t i=0; i<ops.size(); i++)
        {
            sum+=ops[i];
        }
        return sum;
    }
};