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
    ll n; 
    cin >> n;
    string pref; 
    cin >> pref;

    vi arrr(n + 1, 0);
    for(ll i = n - 1; i >= 0; i--){
        arrr[i] = arrr[i + 1] + (pref[i] == '1');
    }

    ll pref_cnt = 0;
    ll ans = -1;
    ll dist = n * 2;
    ll threshold = (n + 1) / 2;

    f(i, 0, n + 1){
        if(pref_cnt >= (i + 1) / 2 && arrr[i] >= (n - i + 1) / 2 && abs(n - 2 * i) < dist){
            dist = abs(n - 2 * i);
            ans = i;
        }
        if(i != n)
            pref_cnt += (pref[i] == '0');
    }

    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t; 
    cin >> t;
    f(i, 0, t) solve();
}
