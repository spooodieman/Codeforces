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
    sort(all(arr));
    if(n == 1){
        if(arr[0] == 1) YES;
        else NO;
        return;
    }
    if(arr[0] != 1){
        NO;
        return;
    }
    ll sum = 1;
    f(i,1,n){
        if(arr[i] > sum){
            NO;
            return;
        }
        sum += arr[i];
    }
    YES;

}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}