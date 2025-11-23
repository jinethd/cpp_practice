#include <iostream>
#include <vector>


// we seek to provide an intersection between two arrays

class Solution {
public:
    std::vector<int> intersect(std::vector<int>& nums1, std::vector<int>& nums2) {
        
        // this will be where we store our solution
        std::vector<int> sol = {};

        std::unordered_map<int, int> counts;
        
        // create KvP of number: no. of occurences
        for (int i : nums1) {
            if(counts.find(i) != counts.end()){
                counts[i] += 1;
            } else {
                counts[i] = 1;
            }
        }

        // std::cout<<"this is our KvP for array nums1"<< std::endl;
        // for(auto it=counts.begin();it != counts.end();it++){
        //     std::cout<<it->first<<": "<<it->second<< std::endl;
        // }

        for (int i: nums2) {
            if(counts.find(i) != counts.end() && counts[i]>0){
                sol.push_back(i);
                counts[i] -= 1;
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