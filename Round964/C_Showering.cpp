#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) (v).begin(), (v).end()

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(ll tt = 0){
    ll n,s,m; cin >> n >> s >> m;
    ll curr = 0;
    ll last = 0;
    for(ll i = 0; i < n; i++){
        ll x,y; cin >> x >> y;
        curr = max(curr,x - last);
        last = y;
    }
    curr = max(m-last,curr);
    if(s <= curr) cout << "yes\n";
    else cout << "no\n";
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1;
    cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}