class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;

        while (curr != nullptr) {
            ListNode* after = curr->next; 
            curr->next = prev;            
            prev = curr;                  
            curr = after;                 
        }

        return prev;
    }
};