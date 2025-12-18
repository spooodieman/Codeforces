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
    ll n,k; cin >> n >> k;
    double weeks = (double)(n-k+1);
    ll sum = 0;
    vi arr(n+1,0);
    f(i,1,n+1) cin >> arr[i];
    f(i,1,n+1) arr[i] += arr[i-1];
    f(i,k,n+1){
        sum += arr[i] - arr[i-k];
    }
    cout << fixed << setprecision(10) << (double)sum / weeks << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
        solve();
}