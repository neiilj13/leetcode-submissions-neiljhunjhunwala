class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max=0;
        int local_max=0;
        for(size_t i=0; i<nums.size(); i++)
        {
            if(nums[i]==1)
                {
                    local_max++;
                    if(max<local_max)
                    {
                        max=local_max;
                    }
                }
            if (nums[i]==0)
            {
                local_max=0;
            }
        }
        return max;
    }
};