#include <iostream>
#include <vector>

// we seek to move all zeroes to the end of a vector whilst leaving the relative order of the other elements untouched
// we seek to do this in-place (no copies of the array)
class Solution {
public:
    void moveZeroes(std::vector<int>& nums) {
        auto write = nums.begin();
        for (auto read = nums.begin();read !=nums.end();++read) {
            if (*read != 0){
                *write = *read;
                ++write;
            }
        }

        for (auto it = write;it!=nums.end();++it){
            *it=0;
        }
    }
};

int main() {
    Solution sol;

    std::vector<int> nums = {0,0, 1, 0, 3, 12,0};
    sol.moveZeroes(nums);
    auto it = nums.begin();

    //std::cout << "dereferenced we get: " << &it <<'\n';

    std::cout << "After moving zeroes: ";
    for (int num : nums) std::cout << num << " ";
    std::cout << "\n";

    return 0;
}
