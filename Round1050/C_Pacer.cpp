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
    ll currPos = 0;
    ll currTim = 0;
    ll ans = 0;
    f(i,0,n){
        ll pos,tim; cin >> tim >> pos;
        if(pos != currPos){
            if((tim-currTim)%2==0) ans += (tim - currTim-1);
            else ans += (tim-currTim);
        }
        else{
            if((tim-currTim)%2==0) ans += (tim - currTim);
            else ans += (tim-currTim-1);
        }
        currTim = tim;
        currPos = pos;
    }
    ans += (m - currTim);
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve();
}