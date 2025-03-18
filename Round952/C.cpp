#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(){
    ll size; cin >> size;
    vector<ll> vals(size);
    for(auto &x : vals) cin >> x;
    if(size == 1){
        if(vals[0] == 0){
            cout << 1 << '\n';
        }
        else{
            cout << 0 << '\n';
        }
        return;
    }
    ll answer = 0;
    ll mx = 0;
    ll sum = 0;
    for(ll i = 0; i < size; i++){
        sum += vals[i];
        mx = max(mx,vals[i]);
        if(sum - mx == mx) answer++;
    }
    cout << answer << '\n';
    
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll limit;
    cin >> limit;
    for(ll i = 0; i < limit; i++) solve();
}