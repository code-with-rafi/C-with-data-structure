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

void search_linked_list(Node* head, int x){
    Node* temp = head;
    int index = 0;
    while(temp != NULL){
        if(temp->val == x){
            cout << index << endl;
            return;
        }
        index++;
        temp = temp->next;
    }
    cout << -1 << endl;

}

void print_linked_list(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
}


int main(){
    int val,q,x;
    cin >> q;
    while(q--){
        Node* head = NULL;
        Node* tail = NULL;
        while (true){
            cin >> val;
            if(val == -1){
                break;
            }
        insert_at_tail(head,tail,val);
        }
        cin >> x;
        search_linked_list(head,x);
        // print_linked_list(head);
    }
    
    return 0;
}