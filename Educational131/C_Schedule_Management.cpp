#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) (v).begin(), (v).end()

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(ll tt = 0){
    ll n,m; cin >> n >> m;
    vector<ll> cnt(n,0);
    for(ll i = 0; i < m; i++){
        ll x; cin >> x;
        cnt[--x]++;
    }

    ll ans = 2*m;
    ll l = 1;
    ll r = 2 * m;
    while(l <= r){
        ll mid = l + (r-l)/2;
        ll fre = 0;
        ll need = 0;
        for(ll i = 0; i < n ; i++){
            if(mid >= cnt[i]){
                fre += (mid - cnt[i])/2; 
            }
            else{
                need += cnt[i] - mid;
            }
        }
        if(need <= fre){
            ans = mid;
            r = mid-1;
        }
        else l = mid+1;
    }
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1;
    cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}