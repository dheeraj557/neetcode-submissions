class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int zeroes = 0;
        int prod = 1;
        vector<int>res(n,0);
        for(int i:nums)
        {
            if(i!=0)
            {
                prod*=i;
            }
            else{
                zeroes++;
            }
        }
        if(zeroes>1)
        {
            return res;
        }
        for(int i=0;i<n;i++)
        {
            if(zeroes==1)
            {
                res[i] = (nums[i]==0) ? prod : 0;
            }
            else{
                res[i] = prod / nums[i];
            }
        }
        return res;
    }
};
