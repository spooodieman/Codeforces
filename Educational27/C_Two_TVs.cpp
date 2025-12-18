#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define invl(v) for(auto &x: v) cin >> x;
#define all(v) (v).begin(), (v).end()
#define f(p,q,n) for(auto p = q; p < n; p++)

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(ll tt = 0){
    ll n; cin >> n;
    map<ll,ll> freq;
    f(i,0,n){
        ll a,b; cin >> a >> b;
        freq[a]++;
        freq[b+1]--;
    }
    ll sum = 0;
    ll mx = 0;
    for(auto x : freq){
        sum += x.second;
        mx = max(mx,sum);
    }
    if(mx <= 2) cout << "YES\n";
    else cout << "NO\n";
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
        solve();
}