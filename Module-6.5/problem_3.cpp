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
    int mid = 0;
    int mid_even = 0;

    while(temp != NULL){
        // cout << temp->val << endl;
        temp = temp->next;
        count++;
    }

    // cout << count << endl;

    if(count%2 == 1){
        mid = (count+1)/2; 
        // cout<< "Mid for odd num = " << mid << endl;
    }
    else{
        mid = count/2;
        mid_even = (count/2)+1;
        // cout<< "Mid for even num = " << mid <<","<< mid_even << endl;
    }

    temp = head;
    for(int i=1; i<=count; i++){
        if(i==mid || i==mid_even){
            // cout<< "Mid num = " << temp->val << " ";
            cout << temp->val << " ";
        }      
        temp = temp->next;
    }
}

int main(){
    Node* head = new Node(2);
    Node* a = new Node(4);
    Node* b = new Node(6);
    Node* c = new Node(8);
    Node* d = new Node(10);

    // Node* head = new Node(1);
    // Node* a = new Node(2);
    // Node* b = new Node(3);
    // Node* c = new Node(4);
    // Node* d = new Node(5);
    // Node* e = new Node(6);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    // d->next = e;

    print_linked_list(head);


    return 0;
}