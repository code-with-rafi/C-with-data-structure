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

void print_linked_list(Node* head){
    Node* temp = head;
    int count = 0;
    while(temp != NULL){
        // cout << temp->val << endl;
        temp = temp->next;
        count++;
    }
    cout << count <<endl;
}

int main(){
    Node* head = new Node(2);
    Node* a = new Node(1);
    Node* b = new Node(5);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(8);
    Node* tail = new Node(9);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = tail;

    print_linked_list(head);


    return 0;
}