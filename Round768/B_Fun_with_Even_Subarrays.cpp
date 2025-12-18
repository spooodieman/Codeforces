#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) (v).begin(), (v).end()
#define f(p,q,n) for(ll p = q; p < n; p++)
#define vi vector<ll>

void solve(ll tt = 0) {
    ll n; cin >> n;
    vi arr(n+1); 
    f(i,1,n+1) cin >> arr[i];
    ll goal = arr.back();
    reverse(arr.begin()+1, arr.end());
    ll ans = 0;
    ll x = 1;
    while(x < n){
        if(arr[x+1] == goal)x++;
        else{
            ans++;
            x *= 2;
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