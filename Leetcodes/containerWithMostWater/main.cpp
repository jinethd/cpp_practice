#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    int maxArea(std::vector<int>& height) {
        
        int left = 0;
        int right = height.size() - 1;
        int best = 0;

        while (left < right) {

            int area = (right-left) * std::min(height[left],height[right]);

            best = std::max(area,best);

            if (height[left]<=height[right]){
                left++;
            } else{
                right--;
            }

        }

        return best;
    }
};

int main() {
    Solution sol;

    std::vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};

    int result = sol.maxArea(height);

    std::cout << "Max water area: " << result << "\n";

    return 0;
}
