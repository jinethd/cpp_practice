#include <boost/asio.hpp>
#include <iostream>
#include <array>

using boost::asio::ip::tcp;

int main() {
    std::cout<<"Hello world \n"; 

    try {

        //std::vector<std::string>> vs;

    } catch(std::exception& e) {
        std::cerr << "Exception: " << e.what() << "\n";
    }
        

    return 0;
}