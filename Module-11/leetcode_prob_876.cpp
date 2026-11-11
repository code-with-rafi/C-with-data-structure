class Solution {
public:
    int size(ListNode* head){
        int size = 0;
        ListNode* temp = head;
        while(temp != NULL){
            size++;
            temp = temp->next;
        }
        return size;
    }
    ListNode* middleNode(ListNode* head) {
        int sz = size(head);
        ListNode* temp = head;
        for(int i=0; i<sz/2; i++){
            temp = temp->next;
        }
        return temp;
    }
};