#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(){
    ll size, m; cin >> size >> m;
    vector<ll> centre(size);
    vector<ll> radius(size);
    for(auto &x: centre) cin >> x;
    for(auto &x: radius) cin >> x;
    vector<pair<ll,ll>> limits(size);
    for(ll i = 0; i < size; i++){
        pair<ll,ll> pair1;
        pair1.first = (centre[i] - radius[i]);
        pair1.second = (centre[i] + radius[i]);
        limits[i] = pair1;
    }
    sort()

}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll limit;
    cin >> limit;
    for(ll i = 0; i < limit; i++) solve();
}