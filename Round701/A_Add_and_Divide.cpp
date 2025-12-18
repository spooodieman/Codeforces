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
    ll n,k; cin >> n >> k;
    ll ncop = n;
    bool one = (k == 1);
    ll ans = 0;
    if(k == 1){
        k++;
        ans++;
    }
    while(n){
        ans++;
        n/=k;
    }
    for(ll i = 1; i <= 31; i++){
        ll curr = i + one;
        n = ncop;
        while(n){
            curr++;
            n/=(k+i);
        }
        if(curr > ans) break;
        else ans = curr;
    }
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}