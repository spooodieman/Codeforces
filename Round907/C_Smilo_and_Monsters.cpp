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
    
    sort(all(arr));
    ll ans = 0;
    ll x = 0;
    ll ind = n-1;
    for(ll i = 0; i < n; i++){
        if(arr[i] == -1) break;
        if(i == ind){
            arr[i] -= x;
            if(x != 0) ans++;
            ans += arr[i]/2 + (arr[i]%2);
            break;
        }
        while(x + arr[i] >= arr[ind] && ind > i){
            ans++;
            ans += arr[ind] - x;
            arr[i] = (x + arr[i]) - arr[ind];
            arr[ind] = -1;
            ind--;
            x = 0;
        }
        x += arr[i];
        ans += arr[i];
    }
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1;
    cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}