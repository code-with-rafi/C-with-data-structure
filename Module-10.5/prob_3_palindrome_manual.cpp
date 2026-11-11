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

void print_reversed(Node* head, Node* tail){
    // for(Node *i=head, *j=tail;i != j && i->prev!=j; i=i->next,j=j->prev){
    //     swap(i->val,j->val);
    // }
    Node* i = head;
    Node* j = tail;
    int flag = 0;
    while(i != j && i->prev != j){
        swap(i->val,j->val);
        if(i->val != j->val){
            flag = 1;
            break;
        }
        i = i->next;
        j = j->prev;
    }
    if(flag==1){
        cout << "NO";
    }
    else{
        cout << "YES";
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
    print_reversed(head,tail);
    // print_forward(head);


    return 0;
}
