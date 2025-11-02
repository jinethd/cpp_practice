// we are seeking to merge two sorted linked lists into another sorted linked lists e.g.
// Input:  list1 = [1, 2, 4], list2 = [1, 3, 4]
// Output: [1, 1, 2, 3, 4, 4]

// each node will store a value and a pointer to the next node
// we also have overloaded constructors to use, using member initializer lists

#include <iostream>
#include <vector>

// This is the struct for our nodes, they contain a value, and a pointer to the next node, 
// as well as overloaded constructors that we will use to build our list 
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// function to return a 'ListNoded' pointer from vector
ListNode* buildList(const std::vector<int>& vals) {
    if (vals.empty()) return nullptr;

    ListNode* head = new ListNode(vals[0]);
    ListNode* current = head;

    for (size_t i = 1; i < vals.size(); i++) {
        current->next = new ListNode(vals[i]);
        current = current->next;
    }

    return head;
}

// function to print a list
void printList(ListNode* head) {
    while (head) {
        std::cout << head->val;
        if (head->next) std::cout << " -> ";
        head = head->next;
    }
    std::cout << std::endl;
}

// this function will take two pointers to the first elements of each list as arguments and return a pointer to 
// the head of the final list.
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        

        return nullptr;
    }
};

int main() {

    // sorted vectors
    std::vector<int> vec1 = {1,2,4,6,13};
    std::vector<int> vec2 = {1,5,6,11};

    ListNode* list1Head = buildList(vec1);
    ListNode* list2Head = buildList(vec2);

    printList(list1Head);

    std::cout<<"what even happens "<<list1Head->val<<'\n';

    Solution sol;

    sol.mergeTwoLists(list1Head,list2Head);

    return 0;
}