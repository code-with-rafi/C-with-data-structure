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


int print_size(Node* head){
    Node* temp = head;
    int size=0;
    while(temp != NULL){
        temp = temp->next;
        size++;
    }
    return size;
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

    int size_head = print_size(head);
    int size_head2 = print_size(head2);

    if(size_head == size_head2){
        cout << "YES" <<endl;
    }
    else{
        cout << "NO" <<endl;
    }
    
    return 0;
}