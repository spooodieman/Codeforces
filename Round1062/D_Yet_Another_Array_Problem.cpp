#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) (v).begin(), (v).end()

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

vector<bool> sieve(230, true);
vector<ll> primes;

void precompute(){
    sieve[0] = false;
    sieve[1] = false;
    for(ll i = 2; i <= 229; i++){
        if(sieve[i]){
            primes.push_back(i);
            for(ll j = 1LL * i * i; j <= 229; j += i) sieve[j] = false;
        }
    }
}

void solve(ll tt = 0){
    ll n; cin >> n;
    vector<ll> arr(n); for(auto &i : arr) cin >> i;
    ll ans = INF;
    for(ll i =0 ; i < n; i++){
        for(ll x : primes){
            if(__gcd(arr[i],x) == 1){
                ans = min(ans,x);
            }
        }
    }
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    precompute();
    ll t = 1;
    cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}