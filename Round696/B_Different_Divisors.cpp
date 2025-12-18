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

vector<bool> sieve(1e7+1, true);

void precompute(){
    sieve[0] = false;
    sieve[1] = false;
    for(ll i = 2; i <= 1e7; i++){
        if(sieve[i]){
            for(ll j = 1LL * i * i; j <= 1e7; j += i) sieve[j] = false;
        }
    }
}

void solve(ll tt = 0){
    ll n; cin >> n;
    ll fir = (1+n);
    f(i,fir,1e9){
        if(sieve[i]){
            fir = i;
            break;
        }
    }
    ll sec = fir + n;
    f(i,sec,1e9){
        if(sieve[i] && __gcd(fir,i) == 1){
            cout << fir * i << '\n';
            return;
        }
    }
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    precompute();
    for(ll i = 1; i <= t; i++)
        solve();
}