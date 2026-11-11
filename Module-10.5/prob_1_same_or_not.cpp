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

int check_size(Node*head){
    Node* temp = head;
    int size = 0;
    while(temp!=NULL){
        temp = temp->next;
        size++;
    }
    return size;
}

int check_sort(Node* head, Node* head2){
    Node* temp = head;
    Node* temp2 = head2;
    while(temp != NULL && temp2 != NULL){
        if(temp->val != temp2->val){
            return false;
        }
        temp = temp->next;
        temp2 = temp2->next;
    }
    return temp == NULL && temp2 == NULL;
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;
    Node* head2 = NULL;
    Node* tail2 = NULL;

    int val;
    while(true){
        cin>>val;
        if(val==-1){
            break;
        }
        insert_at_tail(head,tail,val);
    }
    while(true){
        cin>>val;
        if(val==-1){
            break;
        }
        insert_at_tail(head2,tail2,val);
    }
    // print_forward(head);
    // cout << "\n";
    // print_forward(head2);
    int size_head = check_size(head);
    int size_head2 = check_size(head2);
    int sort_head =  check_sort(head,head2);

    if(size_head!=size_head2 || sort_head == false){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
    }

    return 0;
}