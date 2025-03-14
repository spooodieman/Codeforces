#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(){
    ll size,m,v; cin >> size >> m >> v;
    vector<ll> vals(size);
    for(ll &val:vals) cin >> val;
    vector<ll> prefix(m,0);
    vector<ll> suffix(m,0);
    ll index1 = 0;
    ll curr = v;
    ll preSolved = 0;
    ll sufSolved = 0;
    vector<ll> prefixSum(size,0);
    prefixSum[0] = vals[0];
    for(ll i = 0; i < size; i++){
        if(index1 == m) break;
        curr -= vals[i];
        if(curr <= 0){
            prefix[index1] = i;
            index1++;
            curr = v;
            preSolved++;
        }
        if(i == 0) continue;
        prefixSum[i] = vals[i] + prefixSum[i-1]; 
    }
    index1 = m-1;
    curr = v;
    for(ll i = size-1; i >= 0; i--){
        if(index1 == -1) break; 
        curr -= vals[i];
        if(curr <= 0){
            suffix[index1--] = i;
            curr = v;
            sufSolved++;
        }
    }
    ll answer = 0;
    if(preSolved < m && sufSolved < m){
        cout << -1 << '\n';
        return;
    }
    for(ll i = 0; i < m; i++){
        answer = max(answer,prefixSum[prefix[i]] - prefixSum[suffix[i]]);
    }
    cout << answer << '\n';

}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll limit;
    cin >> limit;
    for(ll i = 0; i < limit; i++) solve();
}