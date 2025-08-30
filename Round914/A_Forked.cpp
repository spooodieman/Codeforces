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

int d1[] = {1,1,-1,-1}, d2[] = {1,-1,1,-1};

void solve(ll tt = 0){
    ll a,b; cin >> a >> b;
    ll x1,y1,x2,y2;cin >> x1 >> y1 >> x2 >> y2;
    set<pair<int,int>> st1;
    set<pair<int,int>> st2; 
    f(i,0,4){
        st1.insert({x1 + (a *d1[i]), y1 + (b*d2[i])});
        st2.insert({x2 + (a *d1[i]), y2 + (b*d2[i])});
        st1.insert({x1 + (b *d1[i]), y1 + (a*d2[i])});
        st2.insert({x2 + (b *d1[i]), y2 + (a*d2[i])});
    }
    ll ans = 0;
    for(auto x : st1)
        if(st2.find(x) != st2.end())
            ans++;
    cout << ans << '\n';

}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve();
}