#define AR AnmolRai
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) (v).begin(), (v).end()

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(ll tt = 0){
    ll n; cin >> n;
    vector<ll> a(n),b(n);
    for(auto &i : a) cin >> i;
    for(auto &i : b) cin >> i;

    map<ll,ll> pos;
    for(ll i = 0; i < n; i++) pos[b[i]] = i;
    map<ll,ll> stor;
    
    for(ll i = 0; i < n; i++){
        if(i > pos[a[i]]){
            stor[pos[a[i]] + n - i]++;
        }
        else{
            stor[pos[a[i]] - i]++;
        }
    }
    
    ll ans = 0;
    for(auto i : stor) ans = max(i.second,ans);
    cout << ans;
}   

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1;
    //cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}