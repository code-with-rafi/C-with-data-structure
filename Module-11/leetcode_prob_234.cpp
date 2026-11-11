class Solution {
public:
    void insert_at_tail(ListNode* &newHead, ListNode* &newTail, int val){
        ListNode* newNode = new ListNode(val);
        if(newHead == NULL){
            newHead = newNode;
            newTail = newNode;
            return;
        }
        newTail->next = newNode;
        newTail = newNode;
    }

    void reverse(ListNode* &newHead, ListNode* temp){
        if(temp->next == NULL){
            newHead = temp;
            return;
        }
        reverse(newHead, temp->next);
        temp->next->next = temp;
        temp->next = NULL;
    }

    bool isPalindrome(ListNode* head) {
        ListNode* newHead = NULL;
        ListNode* newTail = NULL;
        ListNode* temp = head;
        while(temp != NULL){
            insert_at_tail(newHead,newTail,temp->val);
            temp = temp->next;
        }
        reverse(newHead,newHead);
        temp = head;
        ListNode* temp2 = newHead;
        while(temp != NULL){
            if(temp->val != temp2->val){
                return false;
            }
            temp = temp->next;
            temp2 = temp2->next;
        }
        return true;
    }
};