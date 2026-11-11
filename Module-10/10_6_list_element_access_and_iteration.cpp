#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> l = {10, 20, 30, 40, 50};

    //back()
    cout << l.back() << endl;

    //front()
    cout << l.front() << endl;

    // next()
    cout << *next(l.begin(),3) << endl;

    //begin()
    cout << *l.begin() << endl;

    //end() -> returns size of element
    cout << *l.end() << endl;
    cout << l.size() << endl;

    return 0;
}