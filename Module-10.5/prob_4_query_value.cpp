#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> l,l2;
    int val,q,x;
    cin >>q;
    while(q--){
        cin >> x >> val;
        if(x < 0 || x > (int)l.size()){
            cout << "Invalid" << endl;
            continue;
        }
        else{
            if(x==0){
            l.push_back(val);
            }
            else if(x==1){
                l.insert(next(l.begin(),x),val);
            }
        }

        for(int val:l){
            cout << val<<" ";
        }
        cout << "\n";
        l2 = l;
        l2.reverse();
        for(int val:l2){
            cout << val<<" ";
        }
        cout << endl;
    }
    return 0;
}