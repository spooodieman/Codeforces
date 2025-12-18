#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) (v).begin(), (v).end()

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(ll tt = 0){
    ll n; cin >> n;
    ll sum = 0;

    vector<ll> arr(n); for(auto &i : arr) {
        cin >> i; sum += i;
    }
    if(sum == 1){
        cout << max(1LL,(ll)(find(all(arr),1) - arr.begin()));
        return;
    }
    vector<ll> dp(1e7,0);
    dp[0] = 1;
    dp[1] = 1;
    for(ll i = 2; i < 1e7+1; i++){
        if()
    }
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
        solve();
}