#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(ll tt = 0){
    ll n; cin >> n;
    cout << n/4 + (n%4?1:0) << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}