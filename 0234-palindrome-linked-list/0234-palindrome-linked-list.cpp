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
    bool isPalindrome(ListNode* head) {
        vector<int>v;
        vector<int>v2;
        ListNode* temp= head;
        while(temp != NULL){
            v.push_back(temp->val);
            v2.push_back(temp->val);
            temp=temp->next;
        }
        reverse(v.begin(),v.end());
        if(v==v2){
            return true;
        }
        return false;
    }
};