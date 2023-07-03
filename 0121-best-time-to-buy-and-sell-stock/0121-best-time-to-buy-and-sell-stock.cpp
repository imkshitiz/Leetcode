class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxPro=0;
        int mini=prices[0];
        int n=prices.size();
        for(int i = 0; i < n; i++ ){
            int cost=prices[i]-mini;
            maxPro=max(maxPro,cost);
            mini=min(mini,prices[i]);
        }
        return maxPro;
    }
};