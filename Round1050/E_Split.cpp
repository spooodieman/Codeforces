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
    vi arr(n); invl(arr);

    if(n%k != 0){cout << "0\n"; return;}

    map<ll,ll> freq;
    map<ll,ll> freq2;
    map<ll,ll> curFreq;

    f(i,0,n) freq[arr[i]]++;

    for(auto x : freq){
        if(x.second%k != 0){ cout << "0\n"; return;}
        freq2[x.first] = x.second/k;
    }
    
    ll ans = 0;
    ll r = 0;

    f(i,0,n){
        while(r < n && curFreq[arr[r]] < freq2[arr[r]]){
            curFreq[arr[r]]++;
            r++;
        }
        ans += r-i;
        curFreq[arr[i]]--;
    }
    
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve();
}