class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i = 0 , j = heights.size()-1;
        int area = 0;
        int minh = 100000;
        while(i<j)
        {
            int width = j-i;
            minh = min(heights[i],heights[j]);
            area = max(area,width*minh);
            if(heights[i]<=heights[j])
            {
                i++;
            }
            else{
                j--;
            }
        }
        return area;
    }
};
