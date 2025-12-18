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
    vi arr(n); invl(arr);
    ll curr = 0;
    vi carr(31,0);
    f(i,0,n){
        f(j,0,31){
            carr[j] += (((1LL << j)&arr[i])?1:0);
        }
    }
    f(i,0,31){ 
        if(carr[i] == 1){
            NO;
            return;
        }
    }
    ll par = -1;
    f(i,0,31){
        if(carr[i] == 0) continue;
        else if(par == -1) par = carr[i]%2;
        else if(carr[i]%2 != par){
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