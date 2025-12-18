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

ll res(ll i, ll j, ll h, ll w){
    if(i > h || j > h) return 0;
    cout << i << " " << j << ": " << h << " " << w << " " << '\n';
    cout << "RESULT " << ((h - i + 1 ) * i) * ((w - j + 1) * j) << "\n\n";
    return max(0LL,(h - i + 1) * i) * ((w - j + 1) * j);
}

void solve(ll tt = 0){
    ll n,m; cin >> n >> m;
    n -= 2;
    m -= 2;
    ll ans = (n+2)*(m+2);
    f(i,1,n+1){
        f(j,1,m+1){
            for(ll k = 0; k < min(m,n); k+=2){
                ll ress = res(i,j,n-k,m-k) + (n+2)*(m+2);
                ans = (ans + ress)%mod;
            }
        }
    }
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
        solve();
}