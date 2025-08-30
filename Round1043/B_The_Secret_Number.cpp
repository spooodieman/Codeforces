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
    ll curr = 1e17;
    vi ans;
    while(curr != 1){
        ll num = 1 + curr;
        if((n%num) == 0){
            ans.push_back(n/num);
        }
        curr /= 10;
    }
    if(ans.size() == 0){
        cout << "0\n";
        return;
    }
    cout << ans.size() << '\n';
    for(ll i : ans) cout << i << " ";
    cout << '\n';

}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve();
}