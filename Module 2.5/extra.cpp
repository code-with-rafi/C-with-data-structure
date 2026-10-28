#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v(n);

    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    vector<int> freq(6);

    for(int i=0; i<n; i++){
        freq[v[i]]++;
    }

    for(int i=0; i<6;i++){
        cout<< i << "->" <<freq[i]<<endl;
    }

    return 0;
}