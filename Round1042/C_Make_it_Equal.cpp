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
    vi a(n),b(n); invl(a); invl(b);
    f(i,0,n) a[i] %= k;
    f(i,0,n) b[i] %= k;
    map<ll,ll> mp1;
    map<ll,ll> mp2;
    f(i,0,n) mp1[a[i]]++;
    f(i,0,n) mp2[b[i]]++;
    for(auto x : mp1){
        if(x.second + mp1[k - x.first] != mp2[x.first] + mp2[k-x.first]){
            NO;
            return;
        }
    }
    YES;
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve();
}