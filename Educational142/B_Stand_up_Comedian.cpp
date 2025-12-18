#define AR AnmolRai
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) (v).begin(), (v).end()

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(ll tt = 0){
    ll a,b,c,d; cin >> a >> b >> c >> d;
    ll ans = a;
    if(a == 0){
        ans += min(1LL, 2 * min(b,c));
        d += max(b,c) - min(b,c);
        if(ans == 0){
            ans += min(1LL,d);
        }
        cout << ans << '\n';
        return;
    }
    else{
        ans += 2*min(b,c);
    }
    d += max(b,c) - min(b,c);
    ans += min(a+1,d);
    cout << ans << '\n';

}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1;
    cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}