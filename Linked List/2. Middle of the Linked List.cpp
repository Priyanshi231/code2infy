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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head;
        int c = 1;
        while(temp->next != nullptr){
            temp = temp->next;
            c++;           
        }

        ListNode* t = head;
        int co = 1;

        while(co != (c/2)+1){
            co++;
            t = t->next;
        }    
        
        return t;
    }
};
