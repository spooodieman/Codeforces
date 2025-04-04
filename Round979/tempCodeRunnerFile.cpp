#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define invl(v) for(auto &x: v) cin >> x;
#define all(v) (v).begin(), (v).end()

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(){
    ll n; cin >> n;
    ll mn = 1e6;
    ll mx = 0;
    for(ll i = 0; i < n; i++){
        ll curr; cin >> curr;
        mn = min(curr,mn);
        mx = max(curr,mx);
    }
    cout << (n-1) * (mx - mn);
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll limit;
    cin >> limit;
    for(ll i = 0; i < limit; i++) solve();
}