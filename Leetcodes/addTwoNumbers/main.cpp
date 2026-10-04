#include <iostream>

struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {};
};

class Solution {
public:
  ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
    ListNode *head = new ListNode(0);
    ListNode *current = head;
    int carry = 0, count = 0;

    while (l1 || l2 || carry > 0) {
      count += 1;
      std::cout << "count: " << count << '\n';

      int value1 = l1 ? l1->val : 0;
      int value2 = l2 ? l2->val : 0;

      // get the total of the sum and update current
      int temp = value1 + value2 + carry;
      current->next = new ListNode(temp % 10);
      current = current->next;
      carry = temp / 10;

      std::cout << "temp: " << temp << ", carry: " << carry << '\n';
      // next node

      if (l1){l1 = l1->next;}
      if (l2){l2 = l2->next;}
    }
    current->next = nullptr;

    return head->next;
  }
};

int main() {
  ListNode *l1 = new ListNode(2);
  l1->next = new ListNode(4);
  l1->next->next = new ListNode(3);

  ListNode *l2 = new ListNode(5);
  l2->next = new ListNode(6);
  l2->next->next = new ListNode(4);
  l2->next->next->next = new ListNode(5);

  Solution solution;
  ListNode *result = solution.addTwoNumbers(l1, l2);

  // Print result
  while (result != nullptr) {
    std::cout << result->val << " ";
    result = result->next;
  }
  // std::cout << 16 % 10 << '\n';sdf
  return 0;
}