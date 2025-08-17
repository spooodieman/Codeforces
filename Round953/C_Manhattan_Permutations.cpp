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
    ll mx; 
    vi ans(n);
    f(i,0,n) ans[i] = i+1;
    x/=2;
    for (int i = 0; i < n; i++)mx  += abs(n - 1 - i - i); 
        if(x > mx){
            NO;
            return;
        }
        f(i,0,n){
            if (x >= n - 1 - 2 * i) {
                    swap(ans[i], ans[n - 1 - i]);
                    x -= n - 1 - 2 * i;
                } else {
                    swap(ans[i], ans[i + x]);
                    x = 0;
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