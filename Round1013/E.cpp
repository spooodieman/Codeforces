#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define invll(v) for(auto &x: v) cin >> x;
#define sortall(v) sort(v.begin(),v.end());

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

vector<bool> sieve(1e7+1, true);
vector<ll> primes;

void precompute(){
    sieve[0] = false;
    sieve[1] = false;
    for(ll i = 2; i <= 1e7+1; i++){
        if(sieve[i]){
            primes.push_back(i);
            for(ll j = 1LL * i * i; j <= 1e7+1; j += i) sieve[j] = false;
        }
    }
}

void solve(){
    ll n; cin >> n;
    ll answer = 0;
    for(ll p : primes){
        if(p > n) break;
        answer += (n/p);
    }
    cout << answer << '\n';

}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll limit;
    cin >> limit;
    precompute();
    for(ll i = 0; i < limit; i++) solve();
}