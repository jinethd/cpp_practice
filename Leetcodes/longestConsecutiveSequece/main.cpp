//on neetcode account
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> uset;
        int maxi = 0;
        for(int i:nums) uset.insert(i);
        for(int i:nums){
            
            if(uset.contains(i-1)) continue;
            int length=1;
            while(uset.contains(i+length)){
                length++;
            };
            maxi = max(maxi, length);
        };
        // for(int i:uset){

        // }
        return maxi;
    }
};
