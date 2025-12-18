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
    ll n; cin >> n;
    vi a(n), b(n); invl(a); invl(b);
    ll l = 0;
    f(i,0,n){
        if(a[i] != b[i]){
            l = i;
            break;
        }
    }
    ll r = l;
    f(i,l+1,n){
        if(a[i] != b[i]){
            r = i;
        }
    }
    while(l > 0 && b[l-1] <= b[l]) l--;
    while(r < n-1 && b[r+1] >= b[r]) r++;
    cout << l + 1 << " " << r + 1 << "\n";

}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}