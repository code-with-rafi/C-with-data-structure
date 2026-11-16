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
    int size(ListNode* head){
        ListNode* temp = head;
        int size = 0;
        while(temp!=NULL){
            size++;
            temp = temp->next;
        }
        return size;
    }
    ListNode* deleteMiddle(ListNode* head) {
        if(head == NULL || head->next == NULL) {
            return NULL;
        }
        int sz = size(head);
        ListNode* temp = head;
        ListNode* prev = NULL;

        for(int i=0; i<sz/2; i++){
            prev = temp;
            temp = temp->next;
        }
        prev->next = temp->next;
        delete temp;
        return head;
    }
};