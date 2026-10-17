class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int bestPrice = 100;
        int res = 0;
        for(int i:prices)
        {
            bestPrice = min(bestPrice,i);
            res=max(res,i-bestPrice);
        }
        return res;
    }
};
