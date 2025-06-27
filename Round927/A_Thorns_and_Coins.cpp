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
    string s; cin >> s;
    ll ans = 0;
    ll index = 0;
    for(ll i = 0; i < n-1; i++){
        if(s[index] == '*') break;
        if(s[index] == '@')ans++;
        if(s[i+1] == '*'){
            i++;
            index++;
        }
        index++;
    }
   
    if((index == n-1) && (s[index] == '@'))ans++;
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve();
}