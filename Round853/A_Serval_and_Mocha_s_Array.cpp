#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define invl(v) for(auto &x: v) cin >> x;
#define all(v) (v).begin(), (v).end()
#define f(p,q,n) for(ll p = q; p < n; p++)
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define vi vector<ll>

void solve(ll tt = 0){
    ll n; cin >> n;
    vi arr(n); invl(arr);
    f(i,0,n){
        f(j,i+1,n){
            if(__gcd(arr[i],arr[j]) <= 2){YES;return;}
        }
    }
    NO;
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve();
}