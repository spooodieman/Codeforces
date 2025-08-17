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
    reverse(s.begin(),s.end());
    vi arr(n+1,0);
    for(ll i = n-1; i>= 0; i--){
        arr[i] = arr[i+1] + (s[i] - '0');
    }
    string ans;
    ll c = 0;
    for(ll i = 0; i < n; i++){
        c += arr[i];
        ans += (char)(c % 10 + '0');
        c/= 10;
    }
    ans += (char)(c%10 + '0');
    while(ans.back() == '0') ans.pop_back();
    reverse(ans.begin(),ans.end());
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve();
}