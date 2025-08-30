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

vector<ll> deal(38,3);
vector<ll> power(38,1);

void precompute(){
    deal[0] = 3;
    f(i,1,37){
        deal[i] = (9+i)*power[i-1];
    }
}

void powers(){
    f(i,1,38){
        power[i] = 3 * power[i-1];
    }
}

void solve(ll tt = 0){
    ll ans = 0;
    ll n,k; cin >> n >> k;
    ll ind = upper_bound(power.begin(),power.end(),n) - power.begin();
    
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    powers();
    precompute();
    for(ll i = 1; i <= t; i++)
        solve();
}