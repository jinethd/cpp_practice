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
    ListNode* mergeTwoLists(ListNode* list1current, ListNode* list2current) {

        ListNode* first = new ListNode();
        ListNode* current = new ListNode();
        first->next = current;
        
        // initialise first element
        if (list1current->val <= list2current->val) {
            first->val = list1current->val;
            if (list1current->val == list2current->val) list2current = list2current->next;
            list1current = list1current->next;
        } else {
            first->val = list2current->val;
            list2current = list2current->next;
        }

        while (list1current && list2current) {
            if (list1current->val <= list2current->val) {
                current->next = new ListNode(list1current->val);
                if (list1current->val == list2current->val) list2current = list2current->next;
                list1current = list1current->next;
                current = current->next;
            } else {
                current->next = new ListNode(list2current->val);
                list2current = list2current->next;
                current = current->next;
            }
        };

        while (list1current || list2current){

        if (list1current) {
            current->next = new ListNode(list1current->val);
            current = current->next;
            list1current = list1current->next;
        } else {
            current->next = new ListNode(list2current->val);
            current = current->next;
            list2current = list2current->next;
        }
    }
        return first;
    }
};

int main() {

    // sorted vectors
    std::vector<int> vec1 = {1,2,4,6,13};
    std::vector<int> vec2 = {1,5,6,11};

    ListNode* list1Head = buildList(vec1);
    ListNode* list2Head = buildList(vec2);

    //printList(list1Head);

    //std::cout<<"what even happens "<<list1Head->val<<'\n';

    Solution sol;

    ListNode* finalHead = sol.mergeTwoLists(list1Head,list2Head);
    printList(finalHead);

    return 0;
}