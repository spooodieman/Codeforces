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
    vector<string> arr(n,string(n,'0'));
    f(i,0,n) cin >> arr[i];
    ll ans = 0;
    if(n&1){
        for(ll i = n/2 - 1; i >= 0 ; i--){
            ll one = (arr[i][n/2] - '0') + (arr[n-1-i][n/2] - '0') + (arr[n/2][i] - '0') + (arr[n/2][n-i-1] - '0');
            ans += min(one,4-one);
        }
        f(i,0,n/2){
            f(j,0,n/2){
                ll one = (arr[i][j] - '0') + (arr[j][n-1-i] - '0') + (arr[n-1-i][n-1-j] - '0') + (arr[n-1-j][i] - '0');
                ans += min(one,4-one);
            }
        }
    }
    else{
        f(i,0,n/2){
            f(j,0,n/2){
                ll one = (arr[i][j] - '0') + (arr[j][n-1-i] - '0') + (arr[n-1-i][n-1-j] - '0') + (arr[n-1-j][i] - '0');
                ans += min(one,4-one);
            }
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