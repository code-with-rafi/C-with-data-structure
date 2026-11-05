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

int size_linked_lsit(Node* head){
    Node* temp = head;
    int size =0;
    while(temp != NULL){
        size++;
        temp = temp->next;
    }
    return size;
}

void insert_at_head(Node* &head, Node* &tail, int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}


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

void insert_at_tail(Node* &head, Node* &tail, int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
    // tail = tail->next;
    
}

void delete_at_tail(Node* &head, Node* &tail, int idx, int size){
    Node* temp = head;

    if(idx>=size){
        return;
    }

    if(idx==0){
        Node* deleteNode = head;
        head = head->next;
        if(head == NULL){
            tail = NULL;
        }
        delete deleteNode;
        return;
    }
    
    for(int i=1; i<idx; i++){
        temp = temp->next;
    }
    
    Node* deleteNode = temp->next;
    // temp->next = temp->next->next;
    temp->next = deleteNode->next;
    if(deleteNode == tail){
        tail = temp;
    }
    delete deleteNode;
    
}

void print_linked_list(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}


int main(){
    Node* head = NULL;
    Node* tail = NULL;
    int val;
 
    int q,x;
    cin >> q;
    int idx;

    while(q--){
        cin >> x;
        if(x==0){
            //insert value at head
            cin >> val;
            insert_at_head(head,tail,val);
        }
        else if(x==1){
            //insert value at tail
            cin >> val;
            insert_at_tail(head,tail,val);
        }
        else if(x==2){
            cin >> idx;
            //delete value from tail also check index
            int size = size_linked_lsit(head);
            delete_at_tail(head,tail,idx,size);
        }
        print_linked_list(head);
    }


    
    // print_linked_list(head);
    
    return 0;
}