#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define invl(v) for(auto &x: v) cin >> x;
#define all(v) (v).begin(), (v).end()

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void pairsort(vector<ll> &a, vector<ll> &b)
{
    ll n = a.size();
    pair<ll, ll> pairt[n];

    for (ll i = 0; i < n; i++) 
    {
        pairt[i].first = a[i];
        pairt[i].second = b[i];
    }

    sort(pairt, pairt + n);

    for (ll i = 0; i < n; i++) 
    {
        a[i] = pairt[i].first;
        b[i] = pairt[i].second;
    }
}
void solve(){
    
}

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

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll limit;
    cin >> limit;
    for(ll i = 0; i < limit; i++) solve();
}