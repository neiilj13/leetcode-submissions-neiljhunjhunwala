#include <string>
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> ops;
        int sum=0;
        for(size_t i=0; i<operations.size(); i++)
        {
            if(operations[i]=="+")
            {
                int plus= ops[ops.size()-2] + ops[ops.size()-1];
                ops.push_back(plus);
                sum+=plus;
            }
            else if(operations[i]=="D")
            {
                int d_score=2*ops[ops.size()-1];
                ops.push_back(d_score);
                sum+=d_score;
            }
            else if(operations[i]=="C")
            {
                sum-=ops[ops.size()-1];
                ops.pop_back();
            }
            else
            {
                ops.push_back(stoi(operations[i]));
                sum+=ops[ops.size()-1];
            }
        }
        return sum;
    }
};