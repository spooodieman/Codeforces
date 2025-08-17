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

void solve(ll tt = 0){
    ll n; cin >> n;
    for(ll i = 2; i * i <= n; i++){
        if(n%i == 0){
            ll curr = n/i;
            for(ll j = 2; j * j <= curr; j++){
                if(j == i) continue;
                if(curr%j == 0 && curr/j != i && curr/j != j){
                    cout << "YES" << '\n';
                    cout << i <<" " <<  j << " " << curr/j << '\n';
                    return;
                }
            }
        }
    }
    NO;
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve();
}