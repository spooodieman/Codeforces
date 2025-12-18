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
    vi arr(n); invl(arr);
    ll l = 0;
    ll r = n-1;
    ll mn = 1;
    ll mx = n;
    while (l <= r) {
        if (arr[l] == mn) {
            l++;
            mn++;
        } else if (arr[l] == mx) {
            l++;
            mx--;
        } else if (arr[r] == mn) {
            r--;
            mn++;
        } else if (arr[r] == mx) {
            r--;
            mx--;
        } else {
            break;
        }
    }
    if(l <= r){
        cout << l + 1 << " " << r + 1 << endl;
    } else{
        cout << -1 << endl;
    }
        
    
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve();
}