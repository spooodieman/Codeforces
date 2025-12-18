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
    ll ans = 0;
    ll l = 0;
    ll r = n-1;
    ll a = 0,b = 0;
    bool flag = false;
    while(l<=r){
        if(a == b){
            ans = l + (n-1-r);
            if(l != r){
                a += arr[l++];
                b += arr[r--];
            }
        }
        else if(a < b)
            a += arr[l++];
        else
            b += arr[r--];
        if(l == r && !flag){
            flag = true;
        }
        else if(flag)
            break;
    }
    if(a == b){
        ans = l + (n-1-r);
    }
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve();
}