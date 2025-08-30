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
    string s,t; cin >> s >> t;
    map<char,ll> freq;
    f(i,0,t.size()) freq[t[i]]++;
    string ans = "";
    for(ll i = s.size()-1; i >= 0; i--){
        if(freq[s[i]] > 0){
            ans += s[i];
            freq[s[i]]--;
        }
    }
    reverse(all(ans));
    if(ans == t) YES;
    else NO;
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve();
}