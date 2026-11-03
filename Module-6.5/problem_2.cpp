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
    int flag = 0;

    vector<int> v(26);

    while(temp != NULL){
        
        if(v[temp->val] > 0){
            flag = 1;
            break;
        }

        v[temp->val]++;
        
        temp = temp->next;
    }

    if(flag==1){
        cout << "YES" <<endl;
    }
    else{
        cout << "NO" << endl;
    }

}

int main(){
    Node* head = new Node(2);
    Node* a = new Node(1);
    Node* b = new Node(5);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(8);
    // Node* e = new Node(4);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    print_linked_list(head);


    return 0;
}