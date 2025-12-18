#define ar anmolrai
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) (v).begin(), (v).end()

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(ll tt = 0){
    ll a,b; cin >> a >> b;
    ll ans = 0;
    while(a){
        ll curr1 = a%10; 
        ll curr2 = b%10;
        if(curr2< curr1) curr2 += 10;
        ans += max(0LL, 2 - abs(curr1-curr2));
        a /= 10;
        b /= 10;
    }
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1;
    cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}