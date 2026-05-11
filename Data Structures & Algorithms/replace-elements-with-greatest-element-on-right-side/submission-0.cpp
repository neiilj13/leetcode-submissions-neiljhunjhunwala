class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        for(size_t i=0; i<arr.size(); i++)
        {
            int max=arr[i+1];
            for(size_t j=i+1; j<arr.size(); j++)
            {
                if(arr[j]>max)
                {
                    max=arr[j];
                }
            }
            arr[i]=max;
            if(i==arr.size()-1)
            {
                arr[i]=-1;
            }
        }
        return arr;
    }
};