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
    ll sum = 0;
    ll mn = INF;
    ll less = 0;
    f(i,0,n){
        f(j,0,m){
            ll x; cin >> x;
            sum += abs(x);
            mn = min(mn,abs(x));
            if(x < 0)less++;
        }
    }
    if(less %2 == 0) cout << sum << '\n';
    else cout << sum - (2 * mn) << '\n';

}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}