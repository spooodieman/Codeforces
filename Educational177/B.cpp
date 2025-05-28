#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define invl(v) for(auto &x: v) cin >> x;
#define all(v) (v).begin(), (v).end()

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(){
    ll n, k, x; cin >> n >> k >> x;
    vector<ll> arr(n);
    invl(arr);
    ll sum = 0;
    for(ll i = 0; i < n; i++){
        sum += arr[i];
    }
    ll begin = x/sum;
    ll total = n*k + 1;
    total -= (begin * n);
    x %= sum;
    for(ll i = n-1; i>= 0; i--){
        if(x <= 0) break;
        x -= arr[i];
        total--;
    }
    cout << max(total,0LL) << '\n';

}   

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll limit;
    cin >> limit;
    for(ll i = 0; i < limit; i++) solve();
}