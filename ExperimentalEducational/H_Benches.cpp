#define AR AnmolRai
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) (v).begin(), (v).end()

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

ll calc(ll n, ll c){
    ll res = 1;
    for(ll t = n; t > n-c; t--){
        res *= t;
    }
    return res;
}

void solve(ll tt = 0){
    ll n ; cin >>n;
    ll curr = calc(n,5);
    cout << curr * (curr/120);
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1;
    //cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}