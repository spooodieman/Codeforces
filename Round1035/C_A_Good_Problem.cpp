#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define invl(v) for(auto &x: v) cin >> x;
#define all(v) (v).begin(), (v).end()
#define f(p,q,n) for(ll p = q; p < n; p++)
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define vi vector<ll>

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(ll tt = 0){
    ll n,l,r,k; cin >> n >> l >> r >> k;
    if(n&1){
        cout << l << '\n';
        return;
    }
    if(n == 2){
        cout << -1 << '\n';
        return;
    }
    ll ln = 0;
    ll p = l;
    while(p){
        ln++;
        p >>=1;
    }
    p = l << 1;
    f(i,0,ln){
        if(p & (1LL << i)){
            p -= 1LL << i;
        }
    }
    if(p > r){
        cout << -1 << '\n';
    }
    else if(k > n-2){
        cout << p << '\n';
    }
    else cout << l << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve();
}