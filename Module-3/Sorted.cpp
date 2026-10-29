#include<bits/stdc++.h>
using namespace std;

int main(){

    int t,n;

    cin >> t;
    
    while(t--){

        cin >> n;
        vector<long long int> v(n);

        for(int i=0;i<n;i++){
            cin >> v[i];
        }

        if(is_sorted(v.begin(),v.end())){
                cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
        
    }

    return 0;
}