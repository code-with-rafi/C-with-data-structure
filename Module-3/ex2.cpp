
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int star = n, space = 0, mid = (n + 1) / 2;

    if (n % 2 == 1){

        if (n == 1){
            cout << "X" << endl;
        }

        else{
            
            for (int i = 1; i <= n; i++){

                for (int k = 1; k <= space; k++){
                    cout << " ";
                }

                for (int j = 1; j <= star; j++){

                    if (i == mid){
                        cout << "X";
                    }

                    else if (j == 1){
                        cout << (i < mid ? "\\" : "/");
                    }
                    else if (j == star){
                        cout << (i > mid ? "\\" : "/");
                    }
                    else{
                        cout << " ";
                    }
                }

                cout << endl;
                if (i < mid){
                    star -= 2;
                    space++;
                }
                else{
                    star += 2;
                    space--;
                }
            }
        }
    }
}