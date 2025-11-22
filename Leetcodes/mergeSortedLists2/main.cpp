#include <iostream>
#include <vector>
#include <chrono>

// In this merging lists task we get the integers m and n, m is the number of non-zero elements
// in nums1, n is the number of elements in the array.
// n is also the number of zeroes in the nums1 array
// we seek to merge the arrays in place
class Solution {
public:
    void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
        // for(int i = (m+n-1);i>=0;i--){
        //     std::cout<<i<<"->";
        //     if(nums1[m]>=nums2[n]){
        //         if(nums1[m]==nums2[n]){
        //             std::cout<<"wearehere"<<nums1[m]<< ' '<<nums2[n];
        //             nums1[i]=nums2[n];
        //             --n;
        //         }
        //         nums1[i]=nums1[m];
        //         --m;
        //     } else {
        //         nums1[i]=nums2[n];
        //         --n;
        //     }
        // }

        int i = m-1;
        int j = n-1;
        int m = n+m-1;

        
    }
};

int main() {
    Solution sol;

    std::vector<int> nums1 = {1,2,3,0,0,0};
    std::vector<int> nums2 = {2,5,6};
    int m = 3, n = 3;

    auto start = std::chrono::high_resolution_clock::now();
    sol.merge(nums1, m, nums2, n);
    auto end = std::chrono::high_resolution_clock::now();

    std::cout<<'\n';
    std::cout << "Merged array: ";
    for (int num : nums1) std::cout << num << " ";
    std::cout << "\n";

    std::cout << "Time elapsed: "
              << std::chrono::duration_cast<std::chrono::nanoseconds>(end-start).count()
              << "ns\n";

    return 0;

}

