#include<bits/stdc++.h>
using namespace std;

int main(){
    list <int> l = {10, 20, 30, 40, 50, 60, 20, 40};

    // erase() -> delete element from the specific position
    // l.erase(next(l.begin(),3));

    // erase() multiple value (n to n-1)
    // l.erase(next(l.begin(),2),next(l.begin(),4));

    // replace()
    // replace(l.begin(),l.end(),20,100);

    //find()
    // auto it = find(l.begin(),l.end(),200);
    // if(it != l.end()){
    //     cout << "Found" << endl;
    // }
    // else{
    //     cout << "Not Found" << endl;
    // }

    for(int val : l){
        cout << val << endl;
    }
    return 0;
}