#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(){
    ll size, k; cin >> size >> k;
    vector<ll> vals(size);
    vector<ll> combinations((size-k)+1);
    for(ll &x : vals) cin >> x;
    for(ll i = 0; i < k; i++) combinations[0] += vals[i];
    ll minVal = combinations[0];
    ll index = 1;
    for(ll i = 1; i < (size - k) + 1; i++){
        combinations[i] = (combinations[i-1] - vals[i-1]) + vals[(i+k)-1];
        if(combinations[i] < minVal){
            minVal = combinations[i];
            index = i+1;
        }
    } 
    cout << index << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    solve();
}