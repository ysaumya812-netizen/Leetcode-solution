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
    ListNode* reverseList(ListNode* head) {
        vector<int>ans;
        ListNode* curr= head;
        
        while(curr!=NULL){
            ans.push_back(curr->val);
            curr=curr->next;
        }
        int i= ans.size()-1;
        curr= head;
        while(curr!=NULL){
            curr->val= ans[i];
            i--;
            curr= curr->next;
        }
        return head;
    }
};