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
    invl(arr);
    for(ll i = 0; i < n; i++){
        arr[i] = abs(arr[i]);
    }
    ll goal = arr[0];
    sort(all(arr));
    for(ll i = 0; i < n/2+1; i++) 
        if(arr[i] == goal) {
            cout << "YES" << '\n';
            return;
        }
    cout << "NO" << '\n';
  
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll limit;
    cin >> limit;
    for(ll i = 0; i < limit; i++) solve();
}