#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) (v).begin(), (v).end()

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(ll tt = 0){
    ll n,m; cin >> n >> m;
    map<ll,pair<vector<ll>,vector<ll>>> vec;
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < m; j++){
            ll x; cin >> x;
            vec[x].first.push_back(i);
            vec[x].second.push_back(j);
        }
    }
    ll ans = 0;

    for(auto x : vec){
        sort(x.second.first.rbegin(),x.second.first.rend());
        sort(x.second.second.rbegin(),x.second.second.rend());
        ll currn = x.second.first.size();
        for(ll j = 0; j < currn; j++){
            ans += (currn - 1 - 2*j) * (x.second.first[j]+1);
        }
        for(ll j = 0; j < currn; j++){            
            ans += (currn - 1 - 2*j) * (x.second.second[j]+1);
        }
    }
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1;
    //cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}