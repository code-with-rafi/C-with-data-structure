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
    // void insert_at_tail(ListNode* &head, ListNode* &tail,int val){
    //     ListNode* newNode = new ListNode(val);
    //     if(head == NULL){
    //         head = newNode;
    //         tail = newNode;
    //         return;
    //     }
    //     tail->next = newNode;
    //     tail = newNode;
    // }
    ListNode* mergeNodes(ListNode* head) {
        // ListNode* newHead = NULL;
        // ListNode* newTail = NULL;

        // ListNode* temp = head;
        // int sum = 0;
        // while(temp!=NULL){
        //     if(temp->val!=0){
        //         sum = sum + temp->val;
        //     }
        //     else if(sum != 0){
        //         insert_at_tail(newHead,newTail,sum);
        //         sum = 0;
        //     }
            
        //     temp = temp->next;
        // }
        // return newHead;

        //return only head
        head = head->next;
        ListNode* temp1 = head;
        ListNode* temp2 = head;
        int sum = 0;
        while(1){
            if(temp2->val==0){
                temp1->val = sum;
                sum = 0;
                if(temp2->next == NULL){
                    temp1->next = NULL;
                    break;
                }
                temp1 = temp1->next;
            }
            else{
                sum += temp2->val;
            }
            temp2 = temp2->next;
        }
        
        return head;
    }
};