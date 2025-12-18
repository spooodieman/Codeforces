#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define invl(v) for(auto &x: v) cin >> x;
#define all(v) (v).begin(), (v).end()
#define f(p,q,n) for(ll p = q; p < n; p++)
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define vi vector<ll>

const ll mod = 998244353;
const ll INF = LLONG_MAX >> 1;

vector<ll> fact(1000000,1);

void precomp(){
    f(i,2,1e6){
        fact[i] = (fact[i-1] * i)%mod;
    }
}

void solve(ll tt = 0){
    string s; cin >> s;
    ll count = 1;
    vi store;
    f(i,1,s.size()){
        if(s[i] != s[i-1]){
            if(count > 1) store.push_back(count);
            count = 1;
        }
        else{
            count++;
        }
    }

    if(count > 1) store.push_back(count);
    ll sum = 0;
    ll ways = 1;
    f(i,0,store.size()) {
        sum += (store[i] - 1); 
    }
    f(i,0,store.size()){
        ways = (ways * (store[i]))%mod;
    }
    ways = (ways * fact[sum]) % mod;
    if(sum == 0){
        cout << "0 1\n";
        return;
    }
    cout << sum << " " << ways << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    precomp();
    for(ll i = 1; i <= t; i++)
        solve();
}