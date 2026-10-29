#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;

    cin >> n;

    vector<int> v(n);

    for(int i=0;i<n;i++){
        cin >> v[i];
    }

    
    int sum_b=0, sum_a=0, flag=0;

    for(int i=0; i<n; i++){
        sum_a += v[i];
    }

    for(int i=0; i<n; i++){
        sum_a -= v[i];          // now sum_a = elements AFTER i

        if(sum_b == sum_a){     // sum_b = elements BEFORE i
            flag = 1;
            cout << i << endl;
            break;
        }

        sum_b += v[i];          // add v[i] to "before" for the next index
    }

    if(flag == 0){
        cout << -1 << endl;
    }
    
    
    
    return 0;

}