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

vector<ll> palin;
vector<ll> dp(4e4+1);

bool isPalin(ll n){
    ll curr = 0;
    ll cop = n;
    while(n){
        curr = curr*10 + n%10;
        n/=10;
    }
    return curr == cop;
}

void precomp() {
    for (ll i = 1; i <= 40000; i++)
        if (isPalin(i)) palin.push_back(i);
    dp[0] = 1;
    for (ll p : palin) {
        for (ll i = p; i <= 40000; i++) {
            dp[i] = (dp[i] + dp[i - p]) % mod;
        }
    }
}


void solve(ll tt = 0){
    ll n; cin >> n;
    cout << dp[n] << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    precomp();
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}