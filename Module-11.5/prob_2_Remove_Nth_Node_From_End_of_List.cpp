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
    void reverse(ListNode* &head, ListNode* temp){
        if(temp == NULL || temp->next==NULL){
            head=temp;
            return;
        }
        reverse(head,temp->next);
        temp->next->next = temp;
        temp->next = NULL;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == NULL)
            return head;

        reverse(head,head);
        if(n==1){
            ListNode* deleteNode = head;
            head = head->next;
            delete deleteNode;
        }
        else{
            ListNode* temp = head;
            for(int i = 1; i<n-1;i++){
                temp = temp->next;
            }
            ListNode* deleteNode = temp->next;
            temp->next = deleteNode->next;
            delete deleteNode;
        }
        reverse(head,head);
        
        return head;
    }
};