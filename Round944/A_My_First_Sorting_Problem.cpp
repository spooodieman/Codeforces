#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(ll tt = 0){
    ll a,b; cin >> a >> b;
    cout << min(a,b) << " " << max(a,b) << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}