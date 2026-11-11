#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> l = {20, 30, 10, 50, 30, 60, 60, 10 };

    // remove(v)
    // l.remove(10);

    // sort()
    // sort(l.begin(),l.end());     //Error
    // l.sort();

    // Desecending Order -> sort(greater<int>())
    // l.sort(greater<int>());

    // unique() => delete duplicate value but list must be sorted.
    // l.unique();      // Error : list must be sorted
    // l.sort();
    // l.unique();

    // reverse() 
    l.reverse();

    for(int val : l){
        cout << val << endl;
    }
    return 0;
}