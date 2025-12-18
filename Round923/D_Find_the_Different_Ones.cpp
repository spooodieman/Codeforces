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
    set<ll> st;
    ll n; cin >> n;
    vi arr(n); invl(arr);
    vi change;
    f(i,1,n){
        if(arr[i] != arr[i-1]) change.push_back(i);
    }
    ll q; cin >> q;
    f(i,0,q){
        ll x,y; cin >> x >> y;
        x--;y--;
        
        auto it = lower_bound(all(change), x+1);
        if (it != change.end() && *it <= y) {
            cout << *it << " " << *it+1 << "\n";
        } else {
            cout << "-1 -1\n";
        }
    }
    cout << '\n';

}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve();
}