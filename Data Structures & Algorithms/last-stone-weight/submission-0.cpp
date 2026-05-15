class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        while(stones.size()>=2)
        {
            sort(stones.begin(), stones.end());
            int max=stones[stones.size()-1];
            int max_2=stones[stones.size()-2];
            if(max==max_2)
            {
                stones.pop_back();
                stones.pop_back();
            }
            else
            {
                stones[stones.size()-1]=max-max_2;
                stones.erase(stones.end() - 2);
            }
        }
        if(stones.empty())
        return 0;
        else
        return stones[0];
    }
};
