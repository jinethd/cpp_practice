#include <iostream>
#include <vector>
#include <algorithm>


// we seek to provide an intersection between two arrays
// in this one we sort the arrays and avoid using the Kv

class Solution {
public:
    std::vector<int> intersect(std::vector<int>& nums1, std::vector<int>& nums2) {

        std::sort(nums1.begin(),nums1.end());
        std::sort(nums2.begin(),nums2.end());

        std::vector<int> sol;

        auto i= nums1.begin(),j=nums2.begin();

        while(i!= nums1.end()&&j!=nums2.end()) {
            if (*i==*j) 
            {
                sol.push_back(*i);
                ++i;
                ++j;
            } 
            else if (*i>*j)
            {
                ++j;
            }
            else 
            {
                ++i;
            }
            
        }
        return sol;

    }
};

int main() {
    Solution sol;
    std::vector<int> nums1 = {1,2,3,2,1};
    std::vector<int> nums2 = {2,2};

    std::vector<int> result = sol.intersect(nums1, nums2);

    std::cout << "Intersection: ";
    for (int x : result) std::cout << x << " ";
    std::cout << "\n";

    return 0;
}