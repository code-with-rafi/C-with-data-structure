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

void reverse_link_list(Node* head, Node* tail){
    for(Node* i = head, *j = tail; i != j && i->prev != j ; i=i->next,j=j->prev){
        swap(i->val,j->val);
    }
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;
    int val;
    while(true){
        cin>>val;
        if(val==-1){
            break;
        }
        insert_at_tail(head,tail,val);
    }
    print_forward(head);
    reverse_link_list(head,tail);
    cout << "\n";
    print_forward(head);
    // cout << "\n";
    // print_backward(tail);

    return 0;
}