#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) (v).begin(), (v).end()

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(ll tt = 0){
    ll m,n; cin >> m >> n;
    vector<ll> arr(n);
    for(auto &i : arr) cin >> i;
    sort(all(arr));
    vector<ll> diff(n);

    for(ll i = 0; i < n-1; i++){
        diff[i] = abs(arr[i] - arr[i+1])-1;
    }

    diff[n-1] = (arr.front() - 1) + (m - arr.back());
    sort(all(diff));
    ll ans = 0;
    ll curr = 1;
    for(ll i = n-1 ; i >= 0; i--){
        diff[i] -= curr;
        if(diff[i] < 0) break;
        if(diff[i] <= 1){
            ans++;
            curr += 2;
            continue;
        }
        ans += diff[i];
        curr += 4;
    }
    cout << m - ans << '\n';

}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}