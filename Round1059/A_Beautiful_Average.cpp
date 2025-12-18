#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define invl(v) for(auto &x: v) cin >> x;
#define all(v) (v).begin(), (v).end()
#define f(p,q,n) for(auto p = q; p < n; p++)

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(ll tt = 0){
    ll n; cin >> n;
    vector<ll> arr(n); invl(arr);
    ll sum = 0;
    f(i,0,n){
        ll curr = 0;
        f(j,i,n){
            curr += arr[j];
            sum = max(sum,curr/(j-i+1));
        }
    }
    cout << sum << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}