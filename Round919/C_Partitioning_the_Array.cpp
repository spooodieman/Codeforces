#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) (v).begin(), (v).end()

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(ll tt = 0){
    ll n; cin >> n;
    vector<ll> arr(n); for(auto &i: arr) cin >> i;
    ll ans = 0;
    for(ll i = 2; i <= n; i++){
        if(n%i) continue;
        bool solved = true;
        for(ll j= 0; j < i; j++){
            ll curr = arr[j]%i;
            for(ll k = j + i; k < n; k+= i){
                if(arr[k]%i != curr){
                    solved = false;
                    break;
                }
            }
        }
        if(solved) {
            cout << "CURR " << i << '\n';
            ans++;
        }
    }
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}