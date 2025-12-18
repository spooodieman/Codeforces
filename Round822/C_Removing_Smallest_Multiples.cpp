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
    string s; cin >> s;
    bool a[n + 1];
    ll ans = 0;
    for (int i = 1; i <= n; i++) {
        a[i] = (s[i - 1] == '1');
    }
    int cost[n + 1];
    for(ll i = n; i >= 1; i--){
        for(int j = i; j <= n; j+= i){
            if(a[j]) break;
            cost[j] = i;
        }
    }
    for (int i = 1; i <= n; i++) {
        if (!a[i]) ans += cost[i];
    }
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve();
}