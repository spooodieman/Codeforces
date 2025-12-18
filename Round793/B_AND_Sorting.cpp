#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define invl(v) for(auto &x: v) cin >> x;
#define f(p,q,n) for(ll p = q; p < n; p++)
#define vi vector<ll>

const ll INF = LLONG_MAX >> 1;

void solve(ll tt = 0){
    ll n; cin >> n;
    vi arr(n); invl(arr);
    ll use = INF;
    f(i,0,n){
        if(arr[i] != i) use &= arr[i]; 
    }
    cout << use << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}