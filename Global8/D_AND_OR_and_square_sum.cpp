#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) (v).begin(), (v).end()

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(ll tt = 0){
    ll n; cin >> n;
    vector<ll> arr(n);
    for(auto &i : arr) cin >> i;
    vector<ll> bits(31,0);
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < 31; j++){
            bits[j] += ((1LL << j)&arr[i]) ? 1 : 0;
        }
    }
    ll ans = 0;
    vector<ll> newVec;

    ll rep = *max_element(all(bits));
    for(ll i = 0; i < rep; i++){
        ll curr = 0;
        for(ll j = 0; j < 31; j++){
            if(bits[j]){
                curr += (1LL << j);
                bits[j]--;
            }
        }
        newVec.push_back(curr);
    }
    for(ll i : newVec) ans += i * i;
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1;
    //cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}