#include <iostream>

bool isValid(std::string s) {

    // We will use a stack (LIFO) and an unordered map to map every closing bracket as keys to the corresponding
    // opening bracket as values
    std::stack<char> stack;
    std::unordered_map<char,char> brackets = {{')','('}, {']','['}, {'}','{'}};

    stack.emplace(s[0]);
    s.erase(0,1);
    std::cout<<s<<"\n";

    // loop through the letters in the string
    for (char letter : s) {

        // if it is a key in our map
        if(brackets.find(letter) != brackets.end()) {
            if (stack.empty() || stack.top() != brackets[letter]) {
                std::cout<<brackets[letter]<<"\n";
                return false;
            }
            stack.pop();
        } else {
            std::cout<<"pushing to the stack "<<letter<<'\n';
            stack.push(letter);
        }
        
    }
    return true;
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