#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,q;

    cin >> n >> q;

    vector<int> v(n);

    for(int i=0;i<n;i++){
        cin >> v[i];
    }

    int j=1;
    while(j<=q){
        int r1,r2;
        cin >> r1 >> r2;
        int sum=0;

         for(int i=r1-1;i<=r2-1; i++){
            sum += v[i];
            // cout << v[i] <<endl;
        }
        cout << sum << endl;

        j++;
    }

       
        // cout << v[i];


    // cout << sum << endl;


    return 0;
}