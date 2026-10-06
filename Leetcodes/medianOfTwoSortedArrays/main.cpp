#include <iostream>
#include <vector>

class Solution{
public:
    double findMedianSortedArrays(std::vector<int>& first, std::vector<int>& second){
        

    }
};

int main(){

    std::vector<int> a = {1,3};
    std::vector<int> b = {2,4};

    Solution sol;

    double answer = sol.findMedianSortedArrays(a,b);

    std::cout<<answer<<'\n';
    return 0;
}