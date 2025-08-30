#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define invl(v) for(auto &x: v) cin >> x;
#define all(v) (v).begin(), (v).end()
#define f(p,q,n) for(ll p = q; p < n; p++)
#define YES cout << "DA\n"
#define NO cout << "NET\n"
#define vi vector<ll>

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(ll tt = 0){
    string s; cin >> s;
    ll ones = 0;
    ll zeroes = 0;
    f(i,0,s.size()){
        ones += (s[i] == '1');
        zeroes += (s[i] == '0');
    }
    if(zeroes == 0 || ones == 0){
        NO;
        return;
    }
    ll pos = min(ones,zeroes);
    if(pos&1) YES;
    else NO;
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve();
}