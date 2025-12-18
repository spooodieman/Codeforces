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
    vi cnt(2,0);
    for(char &c : s) cnt[c - '0']++;
    f(i,0,s.size() + 1){
        if(i == s.size() || cnt[1-(s[i] - '0')] == 0){
            cout << s.size() - i << '\n';
            return;
        }
        cnt[1 - (s[i] - '0')]--;
    }
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve();
}