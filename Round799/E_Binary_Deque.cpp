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
    ll sum = 0;
    f(i,0,n) sum += arr[i];
    if(sum < k){
        cout << "-1\n";
        return;
    }
    else if(sum == k){
        cout << "0\n";
        return;
    }
    vi pref,suf;
    ll curr = 1;
    f(i,0,n){
        if(arr[i] == 1) {
            pref.push_back(curr);
            curr = 1;
        }
        else curr++;
    }
    curr = 1;
    for(ll i = n-1; i >= 0; i--){
        if(arr[i] == 1) {
            suf.push_back(curr);
            curr = 1;
        }
        else curr++;
    }
    f(i,0,pref.size()) cout << pref[i] << " ";
    cout << '\n';
    f(i,0,pref.size()) cout << suf[i] << " ";
    cout << '\n';
    ll ans = 0;
    ll ind1 = 0, ind2 = 0;
    while(sum != k){
        if(pref[ind1] < suf[ind2]){
            ans += pref[ind1++];
        }
        else ans += suf[ind2++];
        sum--;
    }
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve();
}