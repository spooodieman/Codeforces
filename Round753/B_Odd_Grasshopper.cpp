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
    ll a,b; cin >> a >> b;
    if((a&1) == 0){
        if(b%4 == 0){
            cout << a << '\n';
            return;
        }
        else if(b%4 == 1){
            cout << a + (b * -1) << '\n';
            return;
        }
        else if(b%4 == 2){
            cout << a + 1 << '\n';
            return;
        }
        cout << a + b + 1 << '\n'; return;
    }
    if(b%4 == 0){
        cout << a << '\n';
        return;
    }
    else if(b%4 == 1){
        cout << a + b << '\n';
        return;
    }
    else if(b%4 == 2){
        cout << a - 1 << '\n';
        return;
    }
    cout << a + ((b * -1) - 1) << '\n'; return;
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve();
}