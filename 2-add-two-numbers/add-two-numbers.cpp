class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode();
        ListNode* current = dummy;
        int carry = 0;

        while (l1 || l2 || carry) {
            int sum = carry;

            if (l1) {
                sum += l1->val;
                l1 = l1->next;
            }

            if (l2) {
                sum += l2->val;
                l2 = l2->next;
            }

            int digit = sum % 10;
            carry = sum / 10;

            current->next = new ListNode(digit);
            current = current->next;
        }

        ListNode* result = dummy->next;
        delete dummy;
        return result;
    }
};
