#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) (v).begin(), (v).end()

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

int res(ll a1, ll a2, ll b1, ll b2){
    int curr = 0;
    if(a1 > b1) curr++;
    else if(a1 < b1) curr--;
    if(a2 > b2) curr++;
    else if(a2 < b2) curr--;
    if(curr > 0) return 1;
    return 0;
}

void solve(ll tt = 0){
    ll a1,a2,b1,b2; cin >> a1 >> a2 >> b1 >> b2;
    ll ans = 0;
    ans += res(a1,a2,b1,b2);
    ans += res(a1,a2,b2,b1);
    ans += res(a2,a1,b1,b2);
    ans += res(a2,a1,b2,b1);
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1;
    cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}