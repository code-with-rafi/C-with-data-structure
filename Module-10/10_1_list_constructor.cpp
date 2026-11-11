#include<bits/stdc++.h>
using namespace std;

int main(){
    // list<int> l;
    // cout << l.size();
    
    // list<int> l(10);
    // cout << l.size() <<endl;

    list<int> l(10,3);

    // cout << l[0] <<" "; //error
    // cout << l.begin() << endl; // error

    // cout << *l.begin() << endl;  // 3
    // cout << *l.end() << endl;    // 10
   
    for (auto it = l.begin(); it != l.end(); it++){
        // cout << *it << " ";     // 3 3 3 3 3 3 3 3 3 3 
    }

    for(int val : l){
        // cout << val << " ";        // 3 3 3 3 3 3 3 3 3 3 
    }

    // Implement List
    list<int> l1 = {1,2,3,4};
    // list<int> l2 = l1;
    list<int> l2(l1);

    for(int val:l2){
        // cout << val << " ";     // 1 2 3 4  
    }

    // Implement Array
    int a[] {4,5,6,7};
    list<int> l3(a,a+4);

    for (int val : l3){
        // cout << val << " ";     // 4,5,6,7
    }

    // Implement Vector
    vector<int> v = {5,6,7,8,9};
    list<int> l4(v.begin(),v.end());

    for (int val : l4){
        cout << val << " ";     // 5 6 7 8 9 
    }



    return 0;
}