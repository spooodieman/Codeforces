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
    ll n,l,r; cin >> n >> l >> r;
    vi ans;
    ll i = 1;
    while(ans.size() != n){
        if(i == 1){
            ans.push_back(l);
            i++;
            continue;
        }
        ll curr = ((l-1)/i +1)*i;
        if(curr > r) {
            NO;
            return;
        }
        ans.push_back(curr);
        i++;
    }
    YES;
    f(i,0,n) cout << ans[i] << " ";
    cout << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve();
}