#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define invl(v) for(auto &x: v) cin >> x;
#define all(v) (v).begin(), (v).end()

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

ll fact[1001];
ll inv_fact[1001];

ll binpow(ll a, ll b, ll MOD){
    ll res = 1;
    while(b){
        if(b&1){
            res = (res * a)%MOD;
        }
        a = (a*a)%MOD;
        b >>= 1;
    }
    return res;
}

void precomp(){
    fact[0] = 1;
    fact[1] = 1;
    for(ll i = 2; i < 1001; i++){
        fact[i] = (fact[i-1] * i)%mod;
    }
    inv_fact[1000] = binpow(fact[1000],mod-2,mod);
    for(ll i = 1000; i > 0; i--){
        inv_fact[i-1] = (inv_fact[i] * i)%mod;
    }
}

ll ncr(ll n, ll r){
    return fact[n] * inv_fact[r] % mod * inv_fact[n-r] % mod;
}

void solve(ll tt = 0){
    ll n,k; cin >> n >> k;
    vector<ll> arr(n); invl(arr);
    sort(all(arr));
    map<ll,ll> freq;
    for(ll i : arr) freq[i]++;
    ll p = freq[arr[n-k]];
    ll r = 0;
    for(ll i = n-1; i >= n-k; i--){
        if(arr[i] == arr[n-k])r++;
    }
    cout << ncr(p,r) << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    precomp();
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}
