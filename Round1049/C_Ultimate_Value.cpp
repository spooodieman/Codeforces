#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define invl(v) for(auto &x: v) cin >> x;
#define f(p,q,n) for(ll p = q; p < n; p++)
#define vi vector<ll>

const ll INF = LLONG_MAX >> 1;

void solve(ll tt = 0){
    ll n; cin >> n;
    vi arr(n); invl(arr);
    ll sum = 0;
    f(i,0,n){
        if(i&1) sum -= arr[i];
        else sum += arr[i];
    }
    ll ans = sum;
    f(i,n-2,n) ans = max(ans, sum + i - (i%2));

    ll mn_even = INF, mn_odd = INF;
    f(i,0,n){
        if(i&1){
            ans = max(ans, sum + i + 2 * arr[i] - mn_even);
            mn_odd = min(mn_odd, i - 2 * arr[i]); 
        }
        else{
            ans = max(ans, sum + i - 2 * arr[i] - mn_odd);
            mn_even = min(mn_even, i + 2 * arr[i]);
        }
    }
    cout << ans << '\n';

}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}