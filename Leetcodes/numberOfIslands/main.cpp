#include <vector>
#include <iostream>

// we seek to return the number of islands where an 'island' is a group of 1s connected horizontally or vertically or both (not diagonally)
class Solution {
public:
    int numIslands(std::vector<std::vector<char>>& grid) {

        int counter =0;

        for (int i=0; i<grid.size(); i++) {
            for (int j=0; j < grid[0].size();j++) {
                if (grid[i][j] == '1'){
                    dfs(grid,i,j);
                    ++counter;;
                }
            }
        } 

        for (int i=0; i<grid.size(); i++) {
            std::cout<<"{ ";
            for (int j=0; j < grid[0].size();j++) {
                std::cout<< grid[i][j];
                if (j != grid[0].size()-1) std::cout<<", ";
            }
            std::cout<<" }"<<std::endl;
        }        
        return counter;
    }

private:
    void dfs(std::vector<std::vector<char>>& grid, int r, int c) {
        if (r<0 || r>=grid.size() ||
            c >= grid[0].size() || c<0 || grid[r][c] != '1' ) return;

        grid[r][c] = 'X';
        dfs(grid, r, c+1);
        dfs(grid, r, c-1);
        dfs(grid, r+1, c);
    }
};

int main() {
    Solution sol;

    // std::vector<std::vector<char>> grid = {
    //     {'1','1','0','0','0'},
    //     {'1','1','0','0','0'},
    //     {'0','0','1','0','0'},
    //     {'0','0','0','1','1'}
    // };

    std::vector<std::vector<char>> grid = {
        {'0','1','0'},
        {'1','1','1'},
        {'0','1','0'}
    };

    std::cout << sol.numIslands(grid) << "\n";

    return 0;
}
