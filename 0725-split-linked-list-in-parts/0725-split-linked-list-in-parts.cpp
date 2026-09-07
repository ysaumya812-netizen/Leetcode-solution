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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*>v;
        int l=0;
        ListNode* cur= head;
        while(cur){
            l+=1;
            cur= cur->next;
        }
        int val= l/k;
        int rem= l%k;
        cur= head;
        while(k>0){
            vector<ListNode*>v1;
            int cw=0;
            if(rem>0){
                cw= val+1;
                rem--;
            }
            else{
                cw=val;
            }
            k--;
            v.push_back(cur);
            ListNode* prev= nullptr;
            while(cw>0 && cur!= nullptr){
                prev= cur;
                cur= cur->next;
                cw--;
            }
            if(prev!= nullptr){
                prev->next = nullptr;
            }
            
        }
        return v;
    }
};