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
    ll n,m; cin >> n >> m;
    vi arr(n); invl(arr);
    string s; cin >> s;

    ll ind = 0;
    f(i,0,n-1) if(s[i] == 'L') ind++;
    vi ans(n);
    ans[n-1] =  arr[ind] % m;
    ll l = ind;
    ll r = ind;
    for(ll i = n-2; i >= 0; i--){
        if(s[i] == 'R'){
            ans[i] = (ans[i+1] * arr[++r]) % m;
        }
        else{
            ans[i] = (ans[i+1] * arr[--l]) % m;
        }
    }
    for(ll x : ans) cout << x << " ";
    cout << '\n';

}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve();
}