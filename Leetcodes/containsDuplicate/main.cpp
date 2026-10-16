#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_map<int,int> numCount;

        for(int i:nums){
            if(numCount[i]) return true;
            numCount[i]++;
        }
        return false;

    }
};

int main(){
    Solution s;
    vector<int> v= {1,2,3,4};

    bool b = s.hasDuplicate(v);

    cout<<"solution is "<<b<<'\n';

    return 0;
}