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
    ll mxb = 0;
    ll ans = 0;
    vi a(n),b(n); invl(a); invl(b);
    ll sum = 0;
    f(i,0,n){
        if(k == 0) break;
        mxb = max(mxb,b[i]);
        sum += (a[i]);
        ll curr = ((k - 1 < 0)? 0 : k - 1);
        ans = max(ans,sum + mxb * curr);
        k--;
    }
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve();
}