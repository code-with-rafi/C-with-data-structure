#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int val;
        Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node* &head, Node* &tail, int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    // tail = tail->next;
    tail = newNode;
}


void print_linked_list(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->val << endl;
        temp = temp->next;
    }
}


void check_same_linked_list(Node* head, Node* head2){
    Node* temp = head;
    Node* temp2 = head2;
    int flag = 0;
    while(temp != NULL && temp2 != NULL){
        if(temp->val != temp2->val){
            flag = 1;
            break;
        }
        temp = temp->next;
        temp2 = temp2->next;
    }

    if( temp != NULL || temp2 != NULL){
        flag = 1;
    }
    if(flag == 0){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

}


int main(){
    Node* head = NULL;
    Node* tail = NULL;
    Node* head2 = NULL;
    Node* tail2 = NULL;
    int val;
    while (true){
        cin >> val;
        if(val == -1){
            break;
        }
        insert_at_tail(head,tail,val);
    }
    while (true){
        cin >> val;
        if(val == -1){
            break;
        }
        insert_at_tail(head2,tail2,val);
    }
    // print_linked_list(head);
    // print_linked_list(head2);

     check_same_linked_list(head,head2);
    
    
    return 0;
}