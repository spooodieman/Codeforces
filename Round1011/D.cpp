#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(){
    ll size, k; cin >> size >> k;
    vector<ll> d(size);
    for(auto &x : d) cin >> x;
    vector<ll> dp(size,0);
    vector<ll> extrapiece(size,1);
    ll answer = 0;
    for(ll i = size - 1; i >= 0; i--){
        if(i + k >= size)continue;
        dp[i] = d[i];
        ll curr = 0;
        ll pieces = k;
        for(ll j = i+1; j < size; j++){ 
            if((pieces > 0) && (j + pieces + (extrapiece[j] * k) < size)){
                if(dp[j] > curr){
                    curr = dp[j];
                    extrapiece[i]++;
                }
            }
            if(j > i + k){
                curr = max(curr,dp[j]);
            }
            pieces--;
        }
        //cout << "CHOSE CURR " << curr << '\n'; 
        dp[i] += curr;
        answer = max(answer,dp[i]);
    }
    //for(auto x : dp) cout << x << " ";
    //cout << '\n';
    cout << answer << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll limit;
    cin >> limit;
    for(ll i = 0; i < limit; i++) solve();
}