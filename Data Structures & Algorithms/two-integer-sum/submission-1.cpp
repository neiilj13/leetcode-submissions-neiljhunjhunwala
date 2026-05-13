class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> sumtwo;
        for(int i=0; i<nums.size(); i++)
        {
            for(int j=0; j<nums.size(); j++)
            {
                if(i!=j)
                {
                    if(nums[i] + nums[j]==target)
                    {
                        sumtwo={min(i,j),max(i,j)};
                    }
                }
            }
        }
        return sumtwo;
    }
};
