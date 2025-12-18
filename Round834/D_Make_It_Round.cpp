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
    ll n,k; cin >> n >> k;
    ll two = 0;
    ll fiv = 0;
    ll ncop = n;
    ll mult = 1;
    while(ncop%2 == 0 && ncop > 0){
        two++;
        ncop >>= 1;
    }
    ncop = n;
    while(ncop%5 == 0 && ncop > 0){
        fiv++;
        ncop /= 5;
    }
    while(mult * 2 <= k && two < fiv) {
        mult *= 2;
        two++;
    }
    while(mult * 5 <= k && fiv < two) {
        mult *= 5;
        fiv++;
    }
    while(mult * 10 <= k) mult *= 10;
    mult *= (k/mult);
    cout << n * mult << '\n';
    
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}