#define AR AnmolRai
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) (v).begin(), (v).end()

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(ll tt = 0){
    ll n,w; cin >> n >> w;
    vector<ll> bits(30,0);
    for(ll i = 0; i < n; i++){
        ll x; cin >> x;
        bits[log2(x)]++;
    }
    ll curr = w;
    ll ans = 1;
    while(n){
        ll largest = -1;
        for(ll i = 29; i >= 0; i--){
            if((1 << i) <= curr && bits[i]){
                n--;
                bits[i]--;
                largest = 1 << i;
                curr -= largest;
                break;
            }
        }
        if(largest == -1){
            curr = w;
            ans++;
        }
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