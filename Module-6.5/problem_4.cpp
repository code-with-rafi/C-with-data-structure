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

    while(temp != NULL){
        // cout <<  temp->val << " ";
        temp = temp->next;
        count++;
    }

    temp = head;
    // vector<int> v(count);
    int flag = 0;

    while(temp != NULL && temp->next != NULL){
        if(temp->val > temp->next->val){
            flag = 1;
            break;
        }

        temp = temp->next;
    }

    // for(int i=0; i<count; i++){
    //     v[i] = temp->val;
    //     temp = temp->next;
    // }

    // for(int i=1; i<count;i++){
    //    if(v[i-1]>v[i]){
    //     flag =1;
    //     break;
    //    }
        
    // }

    if(flag==1){
        cout << "NO" <<endl;
    }
    else{
        cout << "YES" <<endl;
    }


}

int main(){
    Node* head = new Node(1);
    Node* a = new Node(2);
    Node* b = new Node(5);
    Node* c = new Node(6);
    Node* d = new Node(8);
    Node* e = new Node(9);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    print_linked_list(head);


    return 0;
}