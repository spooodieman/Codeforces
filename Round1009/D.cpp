#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

ll specialsqrt(ll x){
    ll val = sqrtl(x) +5;
    while(val * val > x)val--;
    return val;
}

void solve(){
    ll size, m; cin >> size >> m;

    vector<ll> centre(size);
    vector<ll> radius(size);

    for(auto &x: centre) cin >> x;
    for(auto &x: radius) cin >> x;

    map<ll,ll> points;

    for(ll i = 0; i < size; i++){
        for(ll j = centre[i] - radius[i]; j <= centre[i] + radius[i]; j++){
            ll temp = (j - centre[i]);
            ll y = (2 * specialsqrt(radius[i]*radius[i] - temp*temp)) + 1;
            points[j] = max(points[j],y);
        }
    }
    
    ll answer = 0;
    for(auto x: points) answer += x.second;
    cout << answer << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll limit;
    cin >> limit;
    for(ll i = 0; i < limit; i++) solve();
}