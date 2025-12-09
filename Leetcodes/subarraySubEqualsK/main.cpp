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

        int count=0;

        //O(n^2) solution
        for(auto right=0;right<vec.size();++right){
            if(vec[right]==k) ++count;
            for(auto left=1;left<=right;++left){
                if(vec[right]-vec[left-1] == k) ++count;
            }
        }

        return count;
    }
};

int main() {
    Solution sol;
    std::vector<int> nums = {1, 2, 3};
    int k = 3;

    //sol.subarraySum(nums, k);

    std::cout << sol.subarraySum(nums, k) << "\n";
    return 0;
}