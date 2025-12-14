#include <iostream>
#include <string>
#include <unordered_map>

class Solution{
public:
    int lengthOfSubstr(const std::string& s) {

        if(s.empty()) return 0;

        int bestLength=0;
        int left=0;
        std::unordered_map<char,int> frequencies;

        //update our map and if we hit a duplicate, decrement and move through the string with left
        for (int right=0;right<s.size();++right){
            frequencies[s[right]]++;
            
            while(frequencies[s[right]]>1){
                frequencies[s[left]]--;
                left++;
            }
            bestLength = std::max(right-left+1,bestLength);
        }

        return bestLength;

    }
};

int main() {

    Solution sol;
    std::string s = "abcabcbb";

    std::cout<<sol.lengthOfSubstr(s)<<std::endl;

    return 0;
}