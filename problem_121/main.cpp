#include <vector>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices)
    {
        int minbuy = prices[0];
        int max_profit = 0;

        for (auto i : prices)
        {
            if (i < minbuy) {
                minbuy = i;
            } else if(i - minbuy > max_profit) {
                max_profit = i - minbuy;
            }
        }
        return max_profit;
    }
};
