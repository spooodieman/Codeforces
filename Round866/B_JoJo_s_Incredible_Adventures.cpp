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
    string s; cin >> s;
    ll n = s.size();
    bool allOnes = true;
    bool allZero = true;
    for(char c : s){
        if(c == '1') allZero = false;
        if(c == '0') allOnes = false;
    }
    if(allOnes){
        cout << n * n << '\n';
        return;
    }
    else if(allZero){
        cout << "0\n";
        return;
    }
    s += s;
    ll curr = 0;
    ll mx = 0;
    f(i,0,2 * n){
        if(s[i] == '1') curr++;
        else{
            mx = max(mx,curr);
            curr =0;
        }
    }
    mx = max(mx,curr);
    mx++;
    if(mx&1) cout << mx/2 * (mx/2 + 1) << '\n';
    else cout << mx/2 * mx/2 << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve();
}