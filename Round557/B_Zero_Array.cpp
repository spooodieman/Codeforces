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
    ll odd = 0;
    f(i,0,n) odd += (arr[i]&1);
    if(odd&1){
        NO;
        return;
    }
    ll sum = 0;
    f(i,0,n-1) sum += arr[i];
    if(sum >= arr[n-1])YES;
    else NO;
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
        solve();
}