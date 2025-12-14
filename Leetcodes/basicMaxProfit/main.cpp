#include <iostream>
#include <vector>

class Solution {
public:
    int maxProfit(std::vector<int>& prices){

        if(prices.empty()) return 0;

        int max = 0;
        int lowest = prices[0];

        for (int num : prices){

            if (num<lowest) lowest = num;

            if ((num-lowest)>max) max = num-lowest;
        }

        return max;
    };
};

int main() {
    Solution sol;
    std::vector<int> prices = {7, 1, 5, 3, 6, 4};

    std::cout<<sol.maxProfit(prices)<<std::endl;
    return 0;
}