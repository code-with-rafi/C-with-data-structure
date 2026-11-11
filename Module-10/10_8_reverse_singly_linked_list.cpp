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
    if(head==NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    // tail = tail->next;
    tail = newNode;
}

void print_linked_lsit(Node* head){
    Node* temp = head;
    while(temp != NULL ){
        cout << temp->val << endl;
        temp = temp->next;
    }
}

void reversed_linked_list(Node* &head, Node* temp, Node* &tail){
    if(temp->next == NULL){
        head = temp;
        return;
    }
    reversed_linked_list(head,temp->next,tail);
    temp->next->next = temp;
    temp->next = NULL;
    tail = temp;

}

int main(){
    Node* head = NULL;
    Node* tail = NULL;
    int val;
    while(true){
        cin >> val;
        if(val == -1){
            break;
        }
        insert_at_tail(head,tail,val);
    }  
    cout << "before reversed head :" << head->val << endl;
    cout << "before reversed tail :" << tail->val << endl;
    reversed_linked_list(head,head,tail);
    cout << "after reversed head :" << head->val << endl;
    cout << "after reversed tail :" << tail->val << endl;
    print_linked_lsit(head);
    return 0;
}