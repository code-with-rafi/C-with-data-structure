#include<bits/stdc++.h>
using namespace std;

int main(){
    // int n;
    // cin >> n;
    // vector<string> s(n);

    // for(int i=0; i<n; i++){
    //     cin >> s[i];
    // }

    string s;
    cin >>s;

    // cout << s;

    vector<int> freq(26,0);

    for(int i=0; i<s.length(); i++){
        freq[s[i]-'a']++;
    }

    for(int i=0; i<26;i++){
        if (freq[i] > 0) {
            cout << char('a' + i) << " : " << freq[i] << "\n";
        }
    }

    return 0;
}