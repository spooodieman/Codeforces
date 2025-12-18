#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) (v).begin(), (v).end()

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(ll tt = 0){
    string s; cin >> s;
    ll ans = 0;
    ll n = s.size();
    for(ll siz = 2; siz <= n; siz += 2){
        for(ll i = 0; i <= n-siz; i++){
            bool solved = true;
            for(ll j = i; j < i + siz/2; j++){
                if(s[j] == s[j+siz/2] || s[j] == '?' || s[j+siz/2] == '?') continue;
                else{
                    solved = false;
                    break;
                }
            }
            if(solved){
                ans = siz;
                break;
            }
        }
    }

    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}