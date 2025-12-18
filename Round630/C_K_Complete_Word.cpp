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
    string s; cin >> s;
    ll ans = 0;
    f(i,0,k){
        map<char,ll> freq;
        ll mx = 0;
        for(ll j = i; j < n; j += k){
            freq[s[j]]++;
            mx = max(mx,freq[s[j]]);
        }
        for(ll j = k-i-1; j < n; j += k){
            freq[s[j]]++;
            mx = max(mx,freq[s[j]]);
        }
        ans += ((n/k) * 2) - mx;
    }
    cout << ans/2 << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}