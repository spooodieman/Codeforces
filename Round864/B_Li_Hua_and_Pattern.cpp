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
    vector<vi> arr(n,vi(n));
    f(i,0,n) invl(arr[i]);
    ll ans = 0;
    f(i,0,n){
        f(j,0,n){
            if(arr[i][j] != arr[n-1-i][n-1-j])ans++;
        }
    }
    ans /= 2;
    if((k - ans)%2 == 0 && (k - ans) >= 0)YES;
    else if(((k- ans) >= 0) && ((k-ans)%2 == 1) && (n%2 == 1)) YES;
    else NO; 
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve();
}