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
    vi space;
    ll flag = false;
    ll spacer = 0;
    f(i,0,n){
        if(s[i] == '*' && !flag){
            flag = true;
        }
        else if(s[i] == '*'){
            space.push_back(spacer);
            spacer = 0;
        }
        else if(flag){
            spacer++;
        }
    }
    ll ans = 0;
    f(i,0,space.size())
        ans += space[i] * min(i+1,(ll)space.size()-i);
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve();
}