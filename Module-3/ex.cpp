
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int star = 1, space=n-1, mid_space=n-2, mid=(n+1)/2;
    // int star = n, space=n-1, mid_space=n-2, mid=(n+1)/2;

    for (int i = 1; i <= n; i++){

        for (int k = 1; k <= space; k++){
            cout << " ";
        }

        for(int j=1; j <= star; j++){
            if(i==mid && j==mid){
                cout << "X";
            }
            else if(i==mid){
                cout << " ";
                // star++;
            }

            else{
                cout <<"*";
            }
            
        }
        
        cout << endl;
        star += 2;
        // star--;
        space--;
        
    }
    
    
}