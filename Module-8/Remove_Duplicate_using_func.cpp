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

void delete_at_any_pos(Node* head, int idx){
    Node* temp = head;
    for(int i=1; i<idx; i++){
        temp = temp->next;
    }
    Node* deleteNode = temp->next;
    // temp->next = temp->next->next;
    temp->next = deleteNode->next;
    delete deleteNode;
}



void print_linked_list(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
}

void remove_duplicate_value(Node* &head){
    int i_idx = 0;
    for(Node* i = head; i != NULL; i = i->next){
        int idx = i_idx + 1;
        Node* j = i->next;
        while(j != NULL){
            if(j->val == i->val){
                j = j->next;
                delete_at_any_pos(head,idx);
            }
            else{
                j=j->next;
                idx++;
            }
        }
        i_idx++;
    }
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;
    int val;
    while (true){
        cin >> val;
        if(val == -1){
            break;
        }
        insert_at_tail(head,tail,val);
    }
    remove_duplicate_value(head);
    print_linked_list(head);
    
    
    
    return 0;
}