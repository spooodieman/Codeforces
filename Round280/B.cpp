#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(){
    ll size, road; cin >> size >> road;
    vector<ll> vals(size);
    for(auto &x: vals) cin >> x;
    sort(vals.begin(),vals.end());
    long double answer = max(vals[0] - 0, road - vals[size-1]);
    for(ll i = 1; i < size; i++){
        answer = max(answer,(long double)(vals[i]-vals[i-1])/2);
    }
    cout << fixed << answer << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    solve();
}