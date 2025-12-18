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

    vi a(n),b(n); invl(a); invl(b);

    if(a[n-1] != b[n-1])
    {
        NO;
        return;
    }

    for(ll i = n-2; i >= 0; i--){
        if((a[i] != b[i]) && ((a[i] ^ a[i+1]) != b[i]) && ((a[i] ^ b[i+1]) != b[i])){
            NO;
            return;
        }
    }
    YES;
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}