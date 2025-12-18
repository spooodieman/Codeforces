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
    vi arr(n); invl(arr);
    vi arr2(k); invl(arr2);
    sort(all(arr));
    reverse(all(arr));
    ll ans = 0;
    ll ind = 0;
    f(i,0,n){
        if(ind != n && arr2[ind] < arr2[arr[i]-1]){
            ans += arr2[ind];
            ind++;          
        }
        else{
            ans += arr2[arr[i]-1];
        }
    }
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve();
}