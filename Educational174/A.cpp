#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(){
    ll size; cin >> size;
    vector<ll> vals(size-2);
    for(ll &x : vals) cin >> x;
    for(ll i = 0; i < size-4; i++){
        if(vals[i] == 0)continue;
        if(vals[i+1] == 0 && vals[i+2] == 1){
            cout << "NO" << '\n';
            return;
        }
    }
    cout << "YES" << '\n';
    return; 
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll limit;
    cin >> limit;
    for(ll i = 0; i < limit; i++) solve();
}