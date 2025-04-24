#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define invl(v) for(auto &x: v) cin >> x;
#define all(v) (v).begin(), (v).end()

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(){
    ll n; cin >> n;
    string s; cin >> s;
    ll ones = 0;
    for(ll i = 0; i < n; i++){
        ones += (s[i] - '0');
    }
    ll ans = 0;
    for(ll i = 0; i < n; i++){
        if(s[i] == '0') ans += (ones+1);
        else ans += (ones-1);
    }
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll limit;
    cin >> limit;
    for(ll i = 0; i < limit; i++) solve();
}