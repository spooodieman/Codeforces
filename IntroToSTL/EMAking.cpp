#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;


int main(){
    freopen("input.txt","w",stdout);
    int n = 1000;
    cout << n << '\n';
    for(int popop = 1; popop <= n; popop++){
        int nCopy = popop + 1;
        int a = nCopy;
        int b = nCopy - 1;
        cout << nCopy << " " << a << " " << b << '\n';
        for(int i = 1 ; i < a; i++) cout << i << " ";
        cout << ((popop&1)? nCopy : 1) << " ";
        cout << '\n';
        for(int i = 1 ; i <= b; i++) cout << i << " ";  
        cout << '\n';

    }
    //freopen("output.txt","w",stdout);
    long limit;
    cin >> limit;
}