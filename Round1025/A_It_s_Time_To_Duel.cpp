#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define invl(v) for(auto &x: v) cin >> x;
#define all(v) (v).begin(), (v).end()
#define fl(p,n) for(ll p = 0; p < n; p++)
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define vi vector<ll>

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(ll tt = 0){
    ll n; cin >> n;
    vi arr(n); invl(arr);
    ll num = arr[0];
    bool solved = false;
    fl(i,n){
        if( arr[i] != num){
            solved = true;
            break;
        }
    }
    if(!solved){
        YES;
        return;
    }
    for(ll i = 1; i < n; i++){
        if(arr[i] + arr[i-1] == 0){
            YES;
            return;
        }
    }
    NO;
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve();
}