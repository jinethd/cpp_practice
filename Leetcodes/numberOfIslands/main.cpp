#include <vector>
#include <iostream>

// we seek to return the number of islands where an 'island' is a group of 1s connected horizontally or vertically or both (not diagonally)
class Solution {
public:
    int numIslands(std::vector<std::vector<char>>& grid) {
        
        return 0;
    }

private:
    void dfs(std::vector<std::vector<char>>& grid, int r, int c) {
        
    }
};

int main() {
    Solution sol;

    std::vector<std::vector<char>> grid = {
        {'1','1','0','0','0'},
        {'1','1','0','0','0'},
        {'0','0','1','0','0'},
        {'0','0','0','1','1'}
    };

    std::cout << sol.numIslands(grid) << "\n";

    return 0;
}
