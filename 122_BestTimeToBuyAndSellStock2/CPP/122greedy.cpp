class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int num = prices.size();
        int result = 0;
        for (int i=1; i<num; i++){
            result += max(0, prices[i]-prices[i-1]);
        }
        return result;
    }
};