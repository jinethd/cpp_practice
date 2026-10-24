// //on neetcode account
#include <iostream>
#include <vector>
#include <unordered_set>
#include <queue>


// #include <bits/stdc++.h>


using namespace std;
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

int main(){
    Solution sol;
    vector<int> myVec = {0,3,6,7,2,4,9,7};

    cout<<sol.longestConsecutive(myVec)<<'\n';

    return 0;
}
