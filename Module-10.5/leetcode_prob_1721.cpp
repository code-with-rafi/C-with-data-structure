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
    // void reverse(ListNode* &head,ListNode* temp){
    //     while(temp->next == NULL){
    //         head = temp;
    //         return;
    //     }
    //     reverse(head,temp->next);
    //     temp->next->next=temp;
    //     temp->next = NULL;
    // }
    ListNode* swapNodes(ListNode* head, int k) {
        // ListNode* temp = head;
        // for(int i=1; i<k; i++){
        //     temp = temp->next;
        // }

        // reverse(head,head);

        // ListNode* temp2 = head;
        // for(int i=1; i<k; i++){
        //     temp2 = temp2->next;
        // }
        // swap(temp->val,temp2->val);

        // reverse(head,head);
        // return head;
        
        ListNode* temp = head;
        ListNode* first = head;
        ListNode* second = head;
        for(int i=1; i<k; i++){
            temp = temp->next;
            first = first->next;
        }
        while(temp->next!=NULL){
            temp = temp->next;
            second = second->next;
        }

        swap(first->val,second->val);
        
        return head;

    }
};