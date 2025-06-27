#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define invl(v) for(auto &x: v) cin >> x;
#define all(v) (v).begin(), (v).end()
#define f(p,n) for(ll p = 0; p < n; p++)
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define vi vector<ll>

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(ll tt = 0){
    ll n; cin >> n;
    vi arr(n); invl(arr);
    ll goal = arr[n-1];
    ll ans = 0;
    f(i,n-2){
        for(ll j = i+1; j < n-1; j++){
            auto it = lower_bound(arr.begin() + j + 1, arr.end(), arr[i] + arr[j]);
            ll end = it - (arr.begin() + j + 1);
            if(end == 0) continue;
            it = upper_bound(arr.begin()+j+1, arr.begin() + j + end + 1, goal - arr[i] - arr[j]);
            ans += (arr.begin() + j + end + 1) - it;
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