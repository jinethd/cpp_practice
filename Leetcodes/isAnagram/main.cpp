#include <iostream>
#include <array>

using namespace std;

class Solution{
    public:
    bool isValidAnagram(string s, string t){
        if(s.size()!=t.size()) return false;

        std::array<int,26> counts{};

        for(int i=0;i<s.size();i++){
            counts[s[i]-'a']++;
            counts[t[i]-'a']--;
        };

        for(int x: counts){
            if(x!=0)return false;
        }

        return true;
    };
};

int main(){
    string s = "racecar";
    string t = "cceaarr";

    Solution sol;

    cout<<sol.isValidAnagram(s,t)<<'\n';
    return 0;
}