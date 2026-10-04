class Solution {
public:
    ListNode* swapPairs(ListNode* head) {

        if(head == nullptr){
            return nullptr;
        }

        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* temp = dummy;

        while(temp->next != nullptr && temp->next->next != nullptr){

            ListNode* first = temp->next;
            ListNode* second = first->next;
            ListNode* third = second->next;

            second->next = first;
            first->next = third;
            temp->next = second;

            temp = first;
        }

        return dummy->next;
    }
};