#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(){
    ll size; cin >> size;
    vector<ll> vals(size);
    for(auto &x : vals) cin >> x;
    sort(vals.begin(),vals.end());
    for(ll i = 1; i < size; i++){
        vals[i] = (vals[i] + vals[i-1]) - 1;
    }
    ll answer = vals[size-1];
    cout << answer << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll limit;
    cin >> limit;
    for(ll i = 0; i < limit; i++) solve();
}