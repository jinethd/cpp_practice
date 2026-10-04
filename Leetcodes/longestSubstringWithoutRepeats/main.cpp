#include "iostream"
#include <string>
#include <unordered_map>


class Solution {
public:
    int lengthOfLongestSubstring(std::string s) {
        std::unordered_map<char, int> char_present;
        int uniques=0;

        for(char c:s){
            if(char_present.find(c)==char_present.end()){
                char_present[c]++;
                uniques++;
            }
            else{
                break;
            }
        }

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
