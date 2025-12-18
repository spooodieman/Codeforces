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
    ll n,q; cin >> n >> q;
    vi arr(n); invl(arr);
    vi prefmx(n,0);
    prefmx[0] = arr[0];
    f(i,1,n) prefmx[i] = max(prefmx[i-1],arr[i]);
    f(i,1,n) arr[i] += arr[i-1];
    f(i,0,q){
        ll curr; cin >> curr;
        ll ind = lower_bound(all(prefmx),curr) - prefmx.begin();
        while(ind < n && prefmx[ind] == curr) ind++;
        ind--;
        if(ind < 0) cout << 0 << ' ';
        else if(ind >= n){
            cout << arr.back() << ' ';
        }
        else{
            cout << arr[ind] << ' ';
        }
    }
    cout << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve();
}