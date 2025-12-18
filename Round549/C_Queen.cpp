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
    vector<bool> disrespect(n, false), protectedNode(n, false);
    ll root = -1;
    for (ll i = 0; i < n; i++) {
        ll p, r;
        cin >> p >> r;
        disrespect[i] = r;
        if (p == -1) {
            root = i;
        } else {
            p--;
            if (!r) { 
                protectedNode[p] = true;
            }
        }
    }
    set<ll> ans;
    for (ll i = 0; i < n; i++) {
        if (disrespect[i] && !protectedNode[i]) {
            ans.insert(i + 1);
        }
    }
    if (ans.empty()) 
        cout << -1;
    else 
        for (ll x : ans) cout << x << " ";
    
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
        solve();
}