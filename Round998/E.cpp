#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define invl(v) for(auto &x: v) cin >> x;
#define all(v) (v).begin(), (v).end()
#define fl(p,n) for(ll p = 0; p < n; p++)
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define vi vector<ll>

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(ll tt = 0){
    ll n,m1,m2;
    cin >> n >> m1 >> m2;
    vector<set<ll>> fadj(n+1);
    vector<set<ll>> gadj(n+1);
    fl(i,m1){
        ll x1,x2; cin >> x1 >> x2;
        fadj[x1].insert(x2);
        fadj[x2].insert(x1);
    }
    fl(i,m2){
        ll x1,x2; cin >> x1 >> x2;
        gadj[x1].insert(x2);
        gadj[x2].insert(x1);
    }
    ll diff = 0;
    for (ll u = 1; u <= n; ++u) {
        for (ll v : fadj[u]) {
            if (v > u) { 
                if (!gadj[u].count(v)) {
                    diff++;
                }
            }
        }
        for (ll v : gadj[u]) {
            if (v > u) {
                if (!fadj[u].count(v)) {
                    diff++;
                }
            }
        }
    }
    cout << diff << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve();
}