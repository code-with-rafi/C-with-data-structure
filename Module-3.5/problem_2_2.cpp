#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;

    cin >> n;

    vector<long long int> v(n);

    for(int i=0;i<n;i++){
        cin >> v[i];
    }

    vector<long long int> pre(n);
    pre[0] = v[0];

    for(int i=1;i<n;i++){
        pre[i] = pre[i-1]+v[i];
    }

    // for(int i=0;i<n;i++){
    //     cout << pre[i] << " ";
    // }

    long long int sum_b=0, sum_a=0;
    int index = -1;

    for(int i=0;i<n;i++){
        
        if(i==0){
            sum_b = 0;
        }
        else{
            sum_b = pre[i-1];
        }

        sum_a = pre[n-1] - pre[i];

        if(sum_b == sum_a){
            index = i;
            break;
        }
    }

    if(index != -1){
        cout << index << endl;
    }
    else{
        cout << index << endl;
    }


    return 0;
}