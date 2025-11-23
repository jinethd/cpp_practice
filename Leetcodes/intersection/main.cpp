#include <iostream>
#include <vector>

// we seek to provide an intersection between two arrays

class Solution {
public:
    std::vector<int> intersect(std::vector<int>& nums1, std::vector<int>& nums2) {
        
        

        return {}; 
    }
};

int main() {
    Solution sol;
    std::vector<int> nums1 = {1,2,2,1};
    std::vector<int> nums2 = {2,2};

    std::vector<int> result = sol.intersect(nums1, nums2);

    std::cout << "Intersection: ";
    for (int x : result) std::cout << x << " ";
    std::cout << "\n";

    return 0;
}