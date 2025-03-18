#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(){
    ll planks, size; cin >> planks >> size;
    vector<ll> vals(size);
    for(auto &x: vals) {
        cin >> x;
        x = min(x,size-1);
    }
    ll answer = 0;
    sort(vals.begin(),vals.end());
    
    
    cout << answer << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll limit;
    cin >> limit;
    for(ll i = 0; i < limit; i++) solve();
}   