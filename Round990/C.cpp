#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define invl(v) for(auto &x: v) cin >> x;
#define all(v) (v).begin(), (v).end()

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(){
    ll n; cin >> n;
    vector<ll> arr(n);
    vector<ll> arr2(n);
    invl(arr); invl(arr2);
    ll ans = -1e18;
    vector<ll> best(n);
    ll sum = 0;
    for(ll i = 0 ; i < n; i++){
        best[i] = max(arr[i],arr2[i]);
        sum += best[i];
    }
    vector<ll> switcher(n,-1e18);
    for(ll i = 0 ; i < n; i++){
        switcher[i] = arr[i] +arr2[i];
    }
    for(ll i = 0; i < n; i++){
        ans = max(ans, sum + switcher[i] - best[i]);
    }
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll limit;
    cin >> limit;
    for(ll i = 0; i < limit; i++) solve();
}