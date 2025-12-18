#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll apow(ll a, ll b){
    ll res = 1;
    while(b > 0) {
        res *= a;
        b--;
    }
    return res;
}

void solve(ll tt = 0){
    ll n; cin >> n;
    cout << ((24*apow(4,n-3)) + ((n-3) * 36 * apow(4,n-4)));
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
        solve();
}