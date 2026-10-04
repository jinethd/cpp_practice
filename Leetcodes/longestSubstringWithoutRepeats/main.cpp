#include "iostream"
#include <string>
#include <unordered_map>


class Solution {
public:
    int lengthOfLongestSubstring(std::string s) {
        std::unordered_map<char, int> lastSeenAt;
        int uniques=0, left=0;

        for(int right=0;right<s.size();right++){
            char c=s[right];
            if(lastSeenAt.find(c)!=lastSeenAt.end()){
                left=std::max(left, lastSeenAt[c]+1);
            }
            lastSeenAt[c]=right;
            uniques=std::max(uniques,right-left+1);
        }

        // for(char c:s){
        //     if(char_present.find(c)==char_present.end()){
        //         char_present[c]++;
        //         uniques++;
        //     }
        //     else{
        //         break;
        //     }
        // }

        return uniques;
    }
};


int main(){

    std::string s = "abcabcbb";

    Solution sol;

    int length = sol.lengthOfLongestSubstring(s);

    std::cout<<length<<'\n';
    return 0;
}
