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

void print_linked_list(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int size_linked_lsit(Node* head){
    Node* temp = head;
    int size =0;
    while(temp != NULL){
        size++;
        temp = temp->next;
    }
    return size;
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;
    int val;
    while (true){
        cin >> val;
        if(val == -1){
            break;
        }
        insert_at_tail(head,tail,val);
    }
    int q;
    cin >> q;
    int idx;

    // while(q--){
    //     int idx, val;
    //     cin >> idx >> val;
    //     insert_at_any_pos(head,idx,val);
    //     print_linked_list(head);
    //     cout << "\n";
    // }
    
    while(cin >> idx >>val){
        int size = size_linked_lsit(head);

        if(idx > size){
            cout << "Invalid\n";
            continue;
        }
        else if(idx==size){
            insert_at_tail(head,tail,val);
        }
        else if(idx==0){
            insert_at_head(head,tail,val);
        }
        else{
            insert_at_any_pos(head,idx,val);
        }
        print_linked_list(head);
    }


    
    // print_linked_list(head);
    
    return 0;
}