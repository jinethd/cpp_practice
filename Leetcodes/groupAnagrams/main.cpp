#include <unordered_map>
#include <vector>
#include <string>

using namespace std;
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<int>> master_map;
        for(int i=0;i<strs.size();i++){
            array<int, 26> str_array{};
            for(char c: strs[i]){
                str_array[c-'a']++;
            }

            string key;
            for (int count : str_array) {
                key += to_string(count) + ",";
            }

            master_map[key].push_back(i);
        };
        vector<vector<string>> solution;

        for(const auto& [signature, indices]:master_map){
            vector<string> group;
            for(int i:indices){
                group.push_back(strs[i]);
            }
            solution.push_back(group);
        }
        return solution;
    }
};

int main(){
    return 0;
}