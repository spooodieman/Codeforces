#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define invl(v) for(auto &x: v) cin >> x;
#define all(v) (v).begin(), (v).end()
#define f(p,q,n) for(ll p = q; p < n; p++)
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define vi vector<ll>

void solve(ll tt = 0){
    vi ind(1001,-1);
    ll n; cin >> n;
    vi arr(n); invl(arr);
    ll ans = -1;
    f(i,1,n+1){
        if(arr[i-1] == 1) ans = max(ans,i+n);
        ind[arr[i-1]] = i;
    }

    f(i,1,1001){
        f(j,1,1001){
            if(ind[i] == -1 || ind[j] == -1)continue; 
            if(__gcd(i,j) == 1){
                ans = max(ans,ind[i] + ind[j]);
            }
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