#define AR AnmolRai
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) (v).begin(), (v).end()

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(ll tt = 0){
    ll n; cin >> n;
    vector<ll> arr(n);
    for(ll i = 0; i < n; i++) cin >> arr[i];
    vector<ll> pref(n,0);
    pref.back() = 1;
    vector<ll> suf(n,0);
    suf.front() = 1;
    for(ll i = 1; i < n; i++){
        pref[i] += pref[i-1];
        if(i == n-1) break;
        if(arr[i] - arr[i-1] < arr[i+1] - arr[i]) pref[i] += 1;
        else pref[i] += arr[i] - arr[i-1];
    }
    for(ll i = n-2; i >= 0; i--){
        suf[i] += suf[i+1];
        if(i == 0) break;
        if(arr[i+1] - arr[i] < arr[i] - arr[i-1]) suf[i] += 1;
        else suf[i] += arr[i+1] - arr[i];
    }
    ll q; cin >> q;

    for(ll i :pref) cerr << i << " ";
    cerr << '\n';
    for(ll i :suf) cerr << i << " ";
    cerr << '\n';
    
    for(ll i = 0; i < q; i++){
        ll x,y; cin >> x >> y; x--; y--;
        if(x < y) cout << suf[x] - suf[y] << '\n'; 
        else cout << pref[x] - pref[y] << '\n'; 
    }
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1;
    cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}