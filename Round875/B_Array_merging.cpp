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
    vi a(n),b(n); invl(a); invl(b);
    map<ll,ll> freq1;
    map<ll,ll> freq2;
    ll curr = 0;
    f(i,0,n){
        if(i == 0) {
            curr++; continue;
        }
        if(a[i] != a[i-1]){
            freq1[a[i-1]] = max(freq1[a[i-1]],curr);
            curr = 1;
        }
        else{
            curr++;
        }
    }
    freq1[a.back()] = max(freq1[a.back()],curr);
    curr = 0;
    f(i,0,n){
        if(i == 0) {
            curr++; continue;
        }
        if(b[i] != b[i-1]){
            freq2[b[i-1]] = max(freq2[b[i-1]],curr);
            curr = 1;
        }
        else{
            curr++;
        }
    }
    freq2[b.back()] = max(freq2[b.back()],curr);
    ll ans = 0;

    for(auto x : freq1)
        ans = max(ans,x.second + freq2[x.first]);
    for(auto x : freq2)
        ans = max(ans,x.second + freq1[x.first]);

    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve();
}