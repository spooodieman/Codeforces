#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define invl(v) for(auto &x: v) cin >> x;
#define f(p,q,n) for(ll p = q; p < n; p++)
#define vi vector<ll>

void solve(ll tt = 0){
    ll n; cin >> n;
    vi arr(n); invl(arr);
    vi ans;
    f(i,0,n){
        if(i == 0 || i == n-1 || (arr[i-1] < arr[i] != arr[i] < arr[i+1])) ans.push_back(arr[i]);
    }
    cout << ans.size() << '\n';
    for(ll i : ans) cout << i << " ";
    cout << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}