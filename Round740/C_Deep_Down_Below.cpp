#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) (v).begin(), (v).end()

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;


void solve(ll tt = 0){
    ll n; cin >> n;
    vector<vector<ll>> arr(n);
    for(ll i = 0; i < n; i++){
        ll s; cin >> s;
        for(ll j = 0; j < s; j++){
            ll x; cin >> x;
            arr[i].push_back(x);
        }
    }
    vector<pair<ll,ll>> mn(n);
    for(ll i = 0; i < n; i++){
        ll curr = 0;
        for(ll j = 0; j < arr[i].size(); j++){
            curr = max(curr,arr[i][j]-j+1);
        }
        mn[i] = {curr,arr[i].size()}; 
    }
    sort(all(mn));
    ll l = 1;
    ll r = mn.back().first;
    ll ans = r;
    while(l <= r){
        ll mid = (l+r)/2;
        ll curr = mid;
        bool ok = true;
        for(ll i = 0; i < n; i++){
            if(curr >= mn[i].first){
                curr += mn[i].second;  
            }
            else{
                ok = false;
                break;
            }
        }
        if(ok){
            ans = mid;
            r = mid-1;
        }
        else{
            l = mid+1;
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