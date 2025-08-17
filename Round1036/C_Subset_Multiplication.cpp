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

ll gcd(ll a, ll b)
{
    return b == 0 ? a : gcd(b, a % b);
}

int lcm(int a, int b) {
    if (a == 0 || b == 0) {
        return 0;
    }
    return (a * b) / gcd(a, b);
}

void solve(ll tt = 0){
    ll n; cin >> n;
    vi arr(n); invl(arr);
    ll ans = 1;
    f(i,0,n-1){
        if((arr[i+1]%arr[i]) != 0){
            ans = lcm(ans,arr[i]/gcd(arr[i],arr[i+1]));
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