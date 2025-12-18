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
    ll x,y,z; cin >> x >> y >> z;
    f(i,0,30){
        ll curr = (((1 << i) & x)?1:0) + (((1 << i) & y)?1:0) + (((1 << i) & z)?1:0);
        if(curr%2 == 0 && curr > 0){
            NO;
            return;
        }
    }
    YES;
 
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}