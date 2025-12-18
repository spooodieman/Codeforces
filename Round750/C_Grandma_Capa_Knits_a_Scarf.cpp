#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define invl(v) for(auto &x: v) cin >> x;
#define all(v) (v).begin(), (v).end()
#define f(p,q,n) for(auto p = q; p < n; p++)
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define vi vector<ll>

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(ll tt = 0){
    ll n; cin >> n;
    string s; cin >> s;
    ll ans = n+1;
    for(char c = 'a'; c <= 'z'; c++){
        ll curr = 0;
        ll l = 0;
        ll r = n-1;
        bool valid = true;
        while(l<r){
            if(s[l] == s[r]){
                l++;
                r--;
            }
            else if(s[l] == c){
                l++;
                curr++;
            }
            else if(s[r] == c){
                r--;
                curr++;
            }
            else{
                valid = false;
                break;
            }
        }
        if(valid) ans = min(ans,curr);
    }
    if(ans == n+1) cout << "-1\n";
    else cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}