class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l=0, r=numbers.size()-1;
        while (l<r){
            int lwb=numbers[l],upb=numbers[r];
            if(lwb+upb==target) return {++l,++r};
            if(lwb+upb>target) r--;
            if(lwb+upb<target) l++;
        }

    }
};
