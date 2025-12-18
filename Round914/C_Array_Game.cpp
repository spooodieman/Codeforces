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
    if(k >= 3){
        cout << "0\n";
        return;
    }
    ll ans = arr[0];
    f(i,1,n){
        ans = min(arr[i],ans);
    }
    if(k == 1){
        f(i,0,n){
            f(j,i+1,n){
                ans = min(ans, abs(arr[i]-arr[j]));
            }
        }
        cout << ans << '\n';
        return;
    }
    sort(all(arr));
    f(i,0,n){
        f(j,i+1,n){
            ll curr = abs(arr[i]-arr[j]);
            ll ind = upper_bound(all(arr),curr) - arr.begin();
            if(ind != 0) ans = min(abs(curr-arr[ind-1]),ans);
            if(ind != n) ans = min(abs(curr-arr[ind]),ans);
            ans = min(ans,curr);
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