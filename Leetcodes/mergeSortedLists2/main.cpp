#include <iostream>
#include <vector>

// In this merging lists task we get the integers m and n, m is the number of non-zero elements
// in nums1, n is the number of elements in the array.
// n is also the number of zeroes in the nums1 array
// we seek to merge the arrays in place
class Solution {
public:
    void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
        // your code here
    }
};

int main() {
    Solution sol;

    std::vector<int> nums1 = {1,2,3,0,0,0};
    std::vector<int> nums2 = {2,5,6};
    int m = 3, n = 3;

    sol.merge(nums1, m, nums2, n);

    std::cout << "Merged array: ";
    for (int num : nums1) std::cout << num << " ";
    std::cout << "\n";

    return 0;
}