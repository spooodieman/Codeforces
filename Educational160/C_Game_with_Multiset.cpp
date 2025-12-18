#define AR AnmolRai
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) (v).begin(), (v).end()

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(ll tt = 0){
    ll q; cin >> q;
    vector<ll> bits(31,0);
    for(ll _ = 0; _ < q; _++){
        ll x,y; cin >> x >> y;
        if(x == 1) bits[y]++;
        else{
            for(ll i = 30; i >= 0; i--){
                if(bits[i] == 0) continue;
                ll rem = min(bits[i],y/(1LL << i));
                y -= (rem * (1LL << i));
            }
            if(y == 0) cout << "YES\n";
            else cout << "NO\n";
        }
    }
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1;
    //cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}