#include <iostream>
#include <vector>

class Solution {
public:
    int subarraySum(std::vector<int>& nums, int k) {

        int tempTotal = 0, total = 0;

        std::vector<int> vec;

        for (int num:nums){
            //std::cout<<num<<", "<< std::endl;
            tempTotal +=num;
            // std::cout<<tempTotal<<", "<< std::endl;
            vec.push_back(tempTotal);
        }

        for (int i: vec){
            std::cout<<i<<std::endl;
        }

        for(int i:vec){
            for(int j:vec){
                
            }
        }

        return 0;
    }
};

int main() {
    Solution sol;
    std::vector<int> nums = {1, 2, 3};
    int k = 3;

    std::cout << sol.subarraySum(nums, k) << "\n";
    return 0;
}