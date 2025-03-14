#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(){
    ll size; cin >> size;
    vector<ll> vals(size);
    for(ll &i: vals) cin >> i;
    ll queries; cin >> queries;
    sort(vals.begin(),vals.end());
    for(ll i = 0; i < queries; i++){
        ll curr; cin >> curr;
        cout << (upper_bound(vals.begin(),vals.end(),curr) - vals.begin())<< '\n';
    }
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    solve();
}