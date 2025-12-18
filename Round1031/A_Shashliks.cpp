#define AR AnmolRai
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) (v).begin(), (v).end()

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

ll solver(ll k,ll a,ll b,ll x,ll y){
    ll ans;
    ans = max((k-b+y)/y,0LL);
    k -= max((k-b+y)/y,0LL) * y;
    ans += max(0LL,(k-a+x)/x);
    return ans;
}

void solve(ll tt = 0){
    ll k,a,b,x,y; cin >> k >> a >> b >> x >> y;

    cout << max(solver(k,a,b,x,y),solver(k,b,a,y,x)) << '\n';
    
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1;
    cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}