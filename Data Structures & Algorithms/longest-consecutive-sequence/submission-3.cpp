class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int counter=1;
        int max_count=1;
        for(int i=1; i<nums.size(); i++)
        {
            if(nums[i]==nums[i-1])
            {
                continue;
            }
            if(nums[i]!=nums[i-1]+1)
            {
                counter=1;
            }
            else
            {
                counter++;
            }
            if(max_count<counter)
            {
                max_count=counter;
            }
        }
        if(nums.empty())
        {
            return 0;
        }
        return max_count;
    }
};
