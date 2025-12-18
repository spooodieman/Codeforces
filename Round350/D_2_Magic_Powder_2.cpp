#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) (v).begin(), (v).end()

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(ll tt = 0){
    ll n,k; cin >> n >> k;
    vector<ll> req(n); for(auto &i : req) cin >> i;
    vector<ll> have(n); for(auto &i : have) cin >> i;
    ll l = 0;
    ll r = 3e9;
    ll ans = 0;
    while(l <= r){
        ll mid = l + (r-l)/2;
        ll curr = k;
        bool ok = true;
        for(ll i = 0; i < n; i++){
            ll currReq = mid * req[i];
            if(currReq > have[i]){
                curr -= (currReq - have[i]);
            }
            if(curr < 0){
                ok = false;
                break;
            }
        }
        if(ok){
            ans = mid;
            l = mid+1;
        }
        else r = mid-1;
    }
    cout << ans;
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1;
    //cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}