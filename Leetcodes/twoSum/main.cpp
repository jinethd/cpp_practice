#include <iostream>
//using namespace std;


class Iterators {
    public:
        void vectoranddeque() {

            // std::string myName;

            // std::cout<<"give me your name: ";

            // std::cin >>myName;

            std::vector<int> vi = {1,2,3,4};
            vi.push_back(3);
            vi.emplace_back(4);
            // no push_front as

            std::deque<int> di = {1,2,3};
            di.push_front(-1);

            std::cout<<"jinethsbeginetsest \n";
            auto begin=vi.cbegin();
            std::cout<<"test"<<*begin;

            std::cout<<"vector first element: "<<vi[0]<<'\n';

            std::cout<<std::endl;

            std::cout<<"printing the vector \n";
            for(int i=0;i<vi.size();++i) {
                std::cout<< vi[i] << " ";
            }

            std::cout<<std::endl;

            std::cout<<"printing the deque \n";
            for(int i=0;i<di.size();++i) {
                std::cout<< vi[i] << " ";
            }

            std::cout<<std::endl;

            std::cout<<"Hello World \n";
            //return 0;
        }


};

class Leetcodes {
    public:
        std::vector<int> twoSum(std::vector<int>& vec, int target) {
            std::unordered_map<int,int> num_map;
            for(int i=0; i<vec.size();i++){
                int complement = target - vec[i];
                if (num_map.find(complement) != num_map.end()) {
                    return {num_map[complement],i};
                }
                num_map[vec[i]]=i;
            }

            return {};
        };
};

int main() {

    // Iterators i;
    // i.vectoranddeque();

    std::vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    Leetcodes L;

    std::vector<int> result = L.twoSum(nums,target);

    std::cout<<"["<<result[0]<<", "<<result[1]<<"]"<<" \n";

    return 0;
}