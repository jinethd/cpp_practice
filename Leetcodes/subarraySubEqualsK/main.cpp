#include <iostream>
#include <vector>
#include <unordered_map>

class Solution {
public:
    int subarraySum(std::vector<int>& nums, int k) {

        int tempTotal = 0, runningTotal = 0;

        std::vector<int> vec;

        std::unordered_map<int,int> running_prefix_count;

        for (int num:nums){
            //std::cout<<num<<", "<< std::endl;
            tempTotal +=num;
            // std::cout<<tempTotal<<", "<< std::endl;
            vec.push_back(tempTotal);
        }

        // for (int i: vec){
        //     std::cout<<i<<std::endl;
        // }

        int count=0;

        //O(n^2) solution below
        // for(auto right=0;right<vec.size();++right){
        //     if(vec[right]==k) ++count;
        //     for(auto left=1;left<=right;++left){
        //         if(vec[right]-vec[left-1] == k) ++count;
        //     }
        // }

        //O(n) solution

        for (int i:nums){

            // add number to our variable
            runningTotal += i;
            
            // this means that the first elements up to and including i sum to k
            if (runningTotal==k) ++count;

            if(running_prefix_count.find(runningTotal-k)!=running_prefix_count.end()){
                count += running_prefix_count[runningTotal-k];
                //std::cout<<runningTotal-k<<", "<<running_prefix_count[runningTotal-k]<<std::endl;
            }

            ++running_prefix_count[runningTotal];

        }

        for (const auto& pair:running_prefix_count){
            std::cout<<"{"<<pair.first<<","<<pair.second<<"}"<<std::endl;
        }


        return count;
    }
};

int main() {
    Solution sol;
    std::vector<int> nums = {10, 2, -2, -20, 10};
    int k = -10;

    //sol.subarraySum(nums, k);

    std::cout << sol.subarraySum(nums, k) << "\n";
    return 0;
}