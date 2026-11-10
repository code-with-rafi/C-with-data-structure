#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int val;
        Node* next;
        Node* prev;
    Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print_forward(Node* head){
    Node* temp = head;
    while (temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
    
}

void print_backward(Node* tail){
    Node* temp = tail;
    while (temp != NULL){
        cout << temp->val << " ";
        temp = temp->prev;
    }
}

void delete_at_any_pos(Node* head,int idx){
    Node* temp = head;
    for(int i=1; i<idx; i++){
        temp = temp->next;
    }
    Node* deleteNode = temp->next;
    // temp->next = temp->next->next;
    temp->next = deleteNode->next;
    temp->next->prev = temp;
    // deleteNode->next->prev = temp;
    delete deleteNode;
}

int main(){
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* tail = new Node(40);

    head->next = a;
    a->prev = head;

    a->next = b;
    b->prev = a;

    b->next = tail;
    tail->prev = b;

    delete_at_any_pos(head,2);
    print_forward(head);
    // cout << "\n";
    // print_backward(tail);

    return 0;
}