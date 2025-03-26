// stock buy sell
// easy : maxi variable

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi = 0;
        int minPrice = prices[0];
        for(int i = 1; i < prices.size(); i++){
            if (prices[i] < minPrice){
                minPrice = prices[i];
            }
            maxi = max(maxi, prices[i] - minPrice);
        }

        return maxi;
    }
};