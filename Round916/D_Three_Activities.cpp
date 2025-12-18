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
    vector<pair<ll,ll>> a(n),b(n),c(n);
    f(i,0,n){
        ll x; cin >> x;
        a[i] = {x,i};
    }
    f(i,0,n){
        ll x; cin >> x;
        b[i] = {x,i};
    }
    f(i,0,n){
        ll x; cin >> x;
        c[i] = {x,i};
    }
    sort(all(a), [] (pair<ll,ll> &a, pair<ll,ll> &b){
        return a.first < b.first;
    });
    sort(all(b), [] (pair<ll,ll> &a, pair<ll,ll> &b){
        return a.first < b.first;
    });
    sort(all(c), [] (pair<ll,ll> &a, pair<ll,ll> &b){
        return a.first < b.first;
    });
    ll ans = 0;
    f(i,n-3,n){
        set<ll> vis;
        vis.insert(a[i].second);
        f(j,n-3,n){
            if(vis.count(b[j].second))continue;
            else{
                vis.insert(b[j].second);
                f(k,n-3,n){
                    if(vis.count(c[k].second)) continue;
                    else{
                        ans = max(ans, a[i].first + b[j].first + c[k].first);
                    }
                }
                vis.erase(b[j].second);
            }
        }
        vis.erase(a[i].second);
    }
    cout << ans << '\n';

}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve();
}