/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        vector<int>odd;
        vector<int>even;
        ListNode* curr= head;
        int index=1;
        while(curr!= nullptr){
            if(index%2==0){
                even.push_back(curr->val);
            }
            else{
                odd.push_back(curr->val);
            }
            curr= curr->next;
            index++;
        }
        curr=head;
        for(int i: odd){
            curr->val= i;
            curr= curr->next;
        }
        for(int i: even){
            curr->val= i;
            curr= curr->next;
        }
        
        return head;

    }
};