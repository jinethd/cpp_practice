#include <iostream>
#include <stack>
#include <unordered_map>

bool isValid(const std::string& s) {

    // We will use a stack (LIFO) and an unordered map to map every closing bracket as keys to the corresponding
    // opening bracket as values
    std::stack<char> stack;
    static const std::unordered_map<char,char> brackets = {{')','('}, {']','['}, {'}','{'}};


    // loop through the letters in the string
    for (char letter : s) {

        // if it is a key in our map
        if(brackets.count(letter)) {
            if (stack.empty() || stack.top() != brackets.at(letter)) {
                std::cout<<brackets.at(letter)<<"\n";
                return false;
            }
            stack.pop();
        } else {
            std::cout<<"pushing to the stack "<<letter<<'\n';
            stack.push(letter);
        }
        
    }
    return stack.empty();
}

int main() {
    std::string str = "([)]";
    bool result = isValid(str);

    if(result) {
        std::cout<<"String is valid\n";
    } else {
        std::cout<<"String is invalid\n";
    }

    return 0;
}