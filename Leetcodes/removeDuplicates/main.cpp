#include <iostream>
#include <vector>

class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        // Your code here
        return 0; // placeholder
    }
};

int main() {
    Solution sol;
    std::vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    
    int len = sol.removeDuplicates(nums);
    
    std::cout << "Length after removing duplicates: " << len << "\n";
    std::cout << "Array after removing duplicates: ";
    for(int i = 0; i < len; ++i) std::cout << nums[i] << " ";
    std::cout << "\n";

    return 0;
}