class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> topKF;
        vector<int> counter;
        vector<int> values;
        int count=1;
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size()-1; i++)
        {
            if(nums[i]!=nums[i+1])
            {
                counter.push_back(count);
                values.push_back(nums[i]);
                count=1;
            }
            else
            {
                count++;
            }
        }
        counter.push_back(count);
        values.push_back(nums.back());
        while(k!=0)
        {
            int idx=max_element(counter.begin(), counter.end()) - counter.begin();
            topKF.push_back(values[idx]);
            counter.erase(counter.begin()+idx);
            values.erase(values.begin()+idx);
            k-=1;
        }
        return topKF;
    }
};
