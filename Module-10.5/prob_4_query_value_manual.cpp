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

void insert_at_head(Node* &head, Node* &tail, int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
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

void insert_at_any_pos(Node* head, Node* &tail, int idx, int val){
    Node* newNode = new Node(val);
    Node* temp = head;

    for(int i=1; i<idx; i++){
        temp = temp->next;
    }

    if(temp->next==NULL){
        temp->next = newNode;
        newNode->prev = temp;
        tail = newNode;
        return;
    }
    newNode->next = temp->next;
    temp->next->prev = newNode;
    temp->next = newNode;
    newNode->prev = temp;
}

int size_list(Node* head){
    Node* temp = head;
    int size = 0;
    while(temp!=NULL){
        size++;
        temp = temp->next;
    }
    return size;
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;

    int val,q,x;
    cin >> q;
    while(q--){
        cin >> x >> val;
        int size = size_list(head);
        if(x>size){
            cout << "Invalid" << endl;
            continue;
        }
        else{
            if(x==0){
                insert_at_head(head,tail,val);
            }
            else{
                insert_at_any_pos(head,tail,x,val);
            }
        }
        // insert_at_tail(head,tail,val);
        print_forward(head);
        cout << "\n";
        print_backward(tail);
        cout << "\n";
    }
    


    return 0;
}
