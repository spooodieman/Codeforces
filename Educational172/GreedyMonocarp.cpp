#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(){
    ll size, k; cin >> size >> k;
    vector<ll> vals(size);
    for(ll &x: vals) cin >> x;
    sort(vals.begin(),vals.end());
    for(ll i = size - 1; i >= 0; i--){
        if(k == 0){
            cout << 0 << '\n';
            return;
        }
        else if(vals[i] > k){
            cout << k << '\n';
            return;
        }
        k -= vals[i];
    }
    cout << k << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    long limit;
    cin >> limit;
    for(long i = 0; i < limit; i++) solve();
}