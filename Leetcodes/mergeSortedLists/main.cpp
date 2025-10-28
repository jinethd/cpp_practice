// we are seeking to merge two sorted linked lists into another sorted linked lists e.g.
// Input:  list1 = [1, 2, 4], list2 = [1, 3, 4]
// Output: [1, 1, 2, 3, 4, 4]

// each node will store a value and a pointer to the next node
// we also have overloaded constructors to use, using member initializer lists
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // Your code here
    }
};

int main() {

    Solution sol;

    //sol.mergeTwoLists

    return 0;
}