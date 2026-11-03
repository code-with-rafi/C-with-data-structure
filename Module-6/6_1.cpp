#include<bits/stdc++.h>
using namespace std;


void fun(int* &p){
    p = NULL;
    cout<<"In fun : " << p << endl;
}

int main(){
    int x = 10;
    int* p = &x;
    fun(p);
    cout<<"In main : " << p << endl;
    cout<<"In main x : " << x << endl;

    return 0;
}