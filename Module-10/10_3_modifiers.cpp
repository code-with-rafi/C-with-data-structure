#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> l = {10, 20, 30};
    list<int> l2;
    
    // Assign list
    // list<int> l2(l.begin(),l.end());
    // l2 = l;
    l2.assign(l.begin(),l.end());

    // push_back()
    l2.push_back(40);

    //push_front()
    l2.push_front(100);

    // next(starting,index) -> access ith index value
    // cout << *next(l2.begin(),2) << endl;

    // insert
    l2.insert(next(l2.begin(),3),230);


    // insert list
    list<int> l3 = {12,14,54,23};
    l2.insert(next(l2.begin(),2),l3.begin(),l3.end());


    //insert vector
    vector<int> v = {1,2,3,4,5,6};
    l2.insert(next(l2.begin(),4),v.begin(),v.end());

    for(int val : l2){
        cout << val << endl;
    }

    return 0;
}