#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) (v).begin(), (v).end()

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(ll tt = 0){
    ll n; cin >> n;
    vector<ll> arr(n);
    for(auto &i: arr) cin >> i;
    ll even = 0;
    ll odd = 0;
    for(ll i = 0; i < n; i++){
        if(arr[i]&1)odd++;
        else even++;
    }
    if(odd == 0 || even == 0){
        for(ll i : arr) cout << i << " ";
        cout << '\n';
        return;
    }
    sort(all(arr));
    for(ll i = 0; i < n ; i++) cout << arr[i] << " ";
    cout << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1;
    cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}