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
    map<ll,ll> freq;
    f(i,0,n){
        ll x; cin >> x;
        freq[x]++;
    }
    vi arr;
    for(auto &x : freq){
        arr.push_back(x.second);
    }
    sort(arr.rbegin(),arr.rend());
    ll thresh = arr[0] - 1;
    ll ans = arr[0];
    f(i,1,arr.size()){
        if(thresh == 0) break;
        ans += min(thresh,arr[i]);
        thresh = min(arr[i]-1,thresh-1);
    }
    cout << ans << '\n';

}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}