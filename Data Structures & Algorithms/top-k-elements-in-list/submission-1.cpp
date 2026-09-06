class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>res;
        unordered_map<int,int>freq;
        for(int i=0;i<nums.size();i++)
        {
            freq[nums[i]]++;
        }
        for(int i=0;i<k;i++)
        {
            int temp = 0;
            int temp1 = 0;
            for(auto &it:freq)
            {
                if(it.second>temp)
                {
                    temp = it.second;
                    temp1 = it.first;
                }
            }
            freq[temp1]=0;
            res.push_back(temp1);
        }
        return res;
    }
};
