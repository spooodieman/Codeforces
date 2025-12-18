#define AR AnmolRai
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) (v).begin(), (v).end()

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(ll tt = 0){
    ll n; cin >> n;
    vector<ll> arr(n); for(auto &i : arr) cin >> i;
    sort(all(arr));
    ll odd = 0;
    ll even = 0;
    for(ll i = 0; i < n; i++){
        if(arr[i]&1) break;
        else odd++;
    }
    for(ll i = n-1; i >= 0; i--){
        if(arr[i]&1) break;
        else odd++;
    }
    for(ll i = 0; i < n; i++){
        if(!(arr[i]&1)) break;
        else even++;
    }
    for(ll i = n-1; i >= 0; i--){
        if(!(arr[i]&1)) break;
        else even++;
    }
    cout << min(odd,even) << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1;
    cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}