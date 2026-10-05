class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int>leftMax(n,0),rightMax(n,0);
        int leftM = 0, rightM = 0;
        int res = 0;
        for(int i=1;i<n;i++)
        {
            leftMax[i]=max(leftM,height[i-1]);
            rightMax[n-i-1]=max(rightM,height[n-i]);
            leftM = max(leftM,height[i-1]);
            rightM = max(rightM,height[n-i]);
        }
        for(int i=0;i<n;i++)
        {
            int temp = min(leftMax[i],rightMax[i])-height[i];
            res+=(temp>0?temp:0);
        }
        return res;
    }
};
