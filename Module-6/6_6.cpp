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

void insert_at_any_pos(Node* head,int idx, int val){
    Node* newNode = new Node(val);
    Node* temp = head;

    for(int i=0; i<idx-1; i++){
        // cout << i << " "<<endl;
        temp = temp->next;
        if(temp == NULL){
            return;
        }
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

void print_linked_list(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->val << endl;
        temp = temp->next;
    }
}

int main(){
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);

    head->next = a;
    a->next = b;
    b->next = c;

    insert_at_any_pos(head,3,100);
    insert_at_any_pos(head,10,500);
    print_linked_list(head);
    return 0;
}