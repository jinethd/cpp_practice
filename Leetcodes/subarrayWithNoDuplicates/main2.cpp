#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

class Solution{
public:
    int subarrayWithNoDupes(const std::string& s){

        if(s.empty()) return 0;
        
        int bestLength = 0, left = 0;
        std::unordered_map<char, int> lastSeen;

        for(int right=0;right<s.size();right++){
            char c = s[right];

            if (lastSeen.count(c) && lastSeen[c] > left){
                left = lastSeen[c] + 1;
            }

            lastSeen[c] = right;

            bestLength = std::max(bestLength, right-left+1);
            
        }

        return bestLength;

    };
};

int main(){

    Solution sol;

    std::string s = "abba";

    std::cout<<sol.subarrayWithNoDupes(s)<<'\n';

    return 0;
}
