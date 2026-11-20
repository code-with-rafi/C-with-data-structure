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

void insert_at_any_pos(Node* &head, Node* &tail, int idx, int val){
    Node* newNode = new Node(val);
    Node* temp = head;
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    if(idx == 0){
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
        return;
    }
    else{
        for(int i =1; i<idx; i++){
        temp = temp->next;
        }
        if(temp == tail){
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
        else{
            newNode->next = temp->next;
            temp->next->prev = newNode;
            temp->next = newNode;
            newNode->prev = temp;
        }
    }
}


void print_forward(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
}

void print_backward(Node* tail){
    Node* temp = tail;
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->prev;
    }
}

int size(Node* head){
    Node* temp = head;
    int sz = 0;
    while(temp != NULL){
        sz++;
        temp = temp->next;
    }
    return sz;
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;
    int q,idx,val;
    cin >> q;
    while(q--){
        cin >> idx >> val;
        int sz = size(head);
        if(idx > sz){
            cout << "Invalid\n";
            continue;
        }
        else{
         insert_at_any_pos(head,tail,idx,val);   
        }
        cout  << "L -> ";
        print_forward(head);
        cout << "\n";
        cout  << "R -> ";
        print_backward(tail);
        cout << "\n";
    }
    
    return 0;
}