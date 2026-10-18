

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        //create a um of frequencies
        unordered_map<int, int> frequencies;
        for(int i: nums){
            frequencies[i]++;
        }

        //create a vector where the index is the bucket and the 
        // internal vector is the numbers
        vector<vector<int>> buckets(nums.size()+1);
        for(const auto& [number, frequency]:frequencies){
            buckets[frequency].push_back(number);
        }

        vector<int> ans;
        for(auto it=buckets.end()-1; ans.size()<k;it--){
            for(int i: *it){
                ans.push_back(i);
                if(ans.size()==k) break;
            }
        }
        return ans;
    }
};
