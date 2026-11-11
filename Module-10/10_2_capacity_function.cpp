#include<bits/stdc++.h>
using namespace std;

int main(){
    // l.size()
    // l.max_size()
    // l.clear()
    vector<int> v = {10, 20, 30, 40};
    list<int> l(v.begin(),v.end());
    
    for(int val : l){
        // cout << val << endl;
    }

    // l.empty()

    if(!l.empty()){
        // cout << "Not Empty" << endl;
    }
    else{
        // cout << "Empty" << endl;
    }

    if(l.empty()){
        // cout << "Empty" << endl;
    }
    else{
        // cout << "Not Empty" << endl;
    }

    // l.resize()

    // l.resize(5,100);    // 10 20 30 40 100
    // l.resize(2);        // 10 20
    // l.resize(6);        // 10 20 0 0 0 0
    // l.resize(6,3);         // 10 20 30 40 50 3 3

    //  vector<int> v2 = {89, 21, 34};
    //  l.resize(7,v.begin(),v.end());  // can't do that.

    for(int val : l){
        cout << val << endl;
    }

    return 0;
}