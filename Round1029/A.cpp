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
    ll n,k; cin >> n >> k;
    vi arr(n);
    invl(arr);
    bool solved = true;
    fl(i,n){
        if(arr[i] == 1){
            solved = false;
            break;
        }
    }
    if(solved){
        YES;
        return;
    }
    ll first = 0;
    ll last = n-1;
    fl(i,n)
        if(arr[i] == 1){
            first = i;
            break;
        }
    for(ll i = n - 1; i >=0; i--)
        if(arr[i] == 1){
            last = i;
            break;
        }
    if(last - first + 1 <= k) YES;
    else NO;
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve();
}