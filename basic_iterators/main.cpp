#include <iostream>


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
            auto begin=vi.begin();
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

int main() {

    Iterators i;

    i.vectoranddeque();


    return 0;
}