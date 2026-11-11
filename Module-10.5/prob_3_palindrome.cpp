#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> l,l2;
    int val;
    while(true){
        cin >> val;
        if(val==-1){
            break;
        }
        l.push_back(val);
    }

    // cout << *next(l.begin(),l.size()) <<endl;
    // for(int val:l){
    //     cout << val<<" ";
    // }
    l2 = l;
    l.reverse();
    // for(int val:l2){
    //     cout << val<<" ";
    // }
    if(l==l2){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}