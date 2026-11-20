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

void insert_at_tail(Node* &head, Node* &tail, int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void reverse(Node* &head, Node* temp){
    if(temp->next == NULL){
        head = temp;
        return;
    }
    reverse(head,temp->next);
    temp->next->next = temp;
    temp->next = NULL;
}

void print_forward(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
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
    // print_forward(head);
    Node* temp =head;

    Node* newHead= NULL;
    Node* newTail = NULL;

    while(temp != NULL){
        insert_at_tail(newHead, newTail, temp->val);
        temp = temp->next;
    }

    reverse(head,head);
    temp =head;
    int flag =1;
    Node* temp2 = newHead; 

    while(temp != NULL){
        if(temp->val != temp2->val){
            flag = 0;
            break;
        }
        temp = temp->next;
        temp2 = temp2->next;
    }
    if(flag == 1){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    
    return 0;
}