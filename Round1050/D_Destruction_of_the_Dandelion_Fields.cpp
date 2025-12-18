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
    ll n; cin >> n;
    vi odd, even;
    f(i,0,n){
        ll x; cin >> x;
        if(x&1) odd.push_back(x);
        else even.push_back(x);
    }
    if(odd.size() == 0){
        cout << "0\n";
        return;
    }
    sort(all(odd));
    ll ans = 0;
    f(i,0,even.size()) ans += even[i];
    f(i,odd.size()/2,odd.size()) ans += odd[i];
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve();
}