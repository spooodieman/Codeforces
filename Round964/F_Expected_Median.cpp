#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) (v).begin(), (v).end()

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

ll binpow(ll a, ll b, ll MOD){
    ll res = 1;
    while(b){
        if(b & 1){
            res = (res * a) % MOD;
        }
        a = (a * a) % MOD;
        b >>= 1;
    }
    return res;
}

ll modinv(ll a, ll MOD){
    return binpow(a,MOD-2,MOD);
}

vector<ll> fact(200001), inv_fact(200001);

void precomp(){
    fact[0] = 1;
    for(ll i = 1; i < 200001; i++){
        fact[i] = (i * fact[i-1])%mod;
    }
    inv_fact[200000] = modinv(fact[200000],mod);
    for(ll i = 199999; i>= 0; i--){
        inv_fact[i] = ((i+1) * inv_fact[i+1]) % mod;
    }
}

ll ncr(ll n, ll r){
    if(r > n) return 0;
    return (((fact[n] * inv_fact[r])%mod) * inv_fact[n-r])%mod;
}

void solve(ll tt = 0){
    ll n,k; cin >> n >> k;
    vector<ll> arr(n); for(auto &i : arr) cin >> i;
    ll oneCount = 0;
    ll ans = 0;
    for(ll i : arr) oneCount += i == 1;
    for(ll i = 0; i <= k/2; i++){
        ans += (ncr(oneCount,k-i) * ncr(n-oneCount,i))%mod;
        ans %= mod;
    }
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    precomp();
    ll t = 1;
    cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}