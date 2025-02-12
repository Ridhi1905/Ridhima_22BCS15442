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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head) return nullptr;
        ListNode* current= head;
        while(current && current->next){
            ListNode* runner=current;
            while(runner->next){
                if(runner->next->val==current->val){
                    ListNode* duplicate=runner->next;
                    runner->next=runner->next->next;
                    delete duplicate;
                }
                else{
                    runner=runner->next;
                }
            }
            current=current->next;
        }
        return head;
    }
};
