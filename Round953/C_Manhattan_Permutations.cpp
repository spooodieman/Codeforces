#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define invl(v) for(auto &x: v) cin >> x;
#define all(v) (v).begin(), (v).end()
#define f(p,q,n) for(ll p = q; p < n; p++)
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define vi vector<ll>

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(ll tt = 0){
    ll n,x; cin >> n >> x;
    if(x&1){
        NO;
        return;
    }
    
    ll mx = 0; 
    for (int i = 1; i <= n; i++) mx += abs(n - 2 * i + 1); 
    
    if(x > mx){
        NO;
        return;
    }

    vi ans(n);
    f(i,0,n) ans[i] = i+1;

    f(i,0,n/2){
        if(x == 0) break;

        if (x >= abs(n-(2*(i+1))+1)) {
            swap(ans[i], ans[n - 1 - i]);
            x -= abs(n-(2*(i+1))+1);
        } 
    }
    
    cout << "YES" << '\n';
    f(i,0,n) cout << ans[i] << " ";
    cout << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}