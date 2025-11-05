#include <iostream>
#include <vector>

// two pointer solution with a read and a write pointer, the read pointer moves until it finds an element not equal to the write pointer
// and then the write pointer increments and writes that element in
class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {

        auto write = nums.begin();
        // auto read = write;

        for(auto read=nums.begin(); read!=nums.end();read++) {
            if (*write != *read) {
                write++;
                *write = *read;
            }
        };

        

        return 0; 
    }
};

// print out a vector where all duplicates are removed, it is ok to have garbage after the unique elements are added
// e.g. {0,0,1,1,1,2,2,3,3,4}; -> {0,1,2,3,4,0,1,1,2,3}
int main() {
    Solution sol;
    std::vector<int> nums = {0,0,1,1,1,2,2,3,3,4,4,4,4,5,5,6,88};
    
    int len = sol.removeDuplicates(nums);
    
    std::cout << "Length after removing duplicates: " << len << "\n";
    std::cout << "Array after removing duplicates: ";
    for(int i = 0; i < nums.size(); ++i) std::cout << nums[i] << " ";
    std::cout << "\n";

    return 0;
}