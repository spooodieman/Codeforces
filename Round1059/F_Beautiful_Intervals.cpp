#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define invl(v) for(auto &x: v) cin >> x;
#define all(v) (v).begin(), (v).end()

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(ll tt = 0){
    ll n,k; cin >> n >> k;
    vector<ll> dif(n+3,0), start(n+2,0), endv(n+2,0), ans(n+2,-1);
    for(ll i = 0; i < k; i++){
        ll x,y; cin >> x >> y;
        start[x] = 1;
        endv[y] = 1;
        dif[x]++; dif[y+1]--;
    }
    for(ll i = 1; i <= n; i++) dif[i] += dif[i-1];
    for(ll i = 1; i <= n; i++){
        if(dif[i] == k){
            ans[i] = 0;
            vector<bool> used(n+1,false);
            used[0] = true;
            ll p = 0;
            for(ll j = 1; j <= n; j++){
                if(ans[j] == -1){
                    while(p <= n && used[p]) p++;
                    ans[j] = p; used[p] = true;
                }
            }
            for(ll j = 1; j <= n; j++) cout << ans[j] <<  " ";
            cout << '\n';
            return;
        }
    }
    for(ll i = 1; i < n; i++){
        if(endv[i] == 0){
            ans[i] = 0; ans[i+1] = 1;
            vector<bool> used(n+1,false);
            used[0] = used[1] = true;
            ll p = 0;
            for(ll j = 1; j <= n; j++){
                if(ans[j] == -1){
                    while(p <= n && used[p]) p++;
                    ans[j] = p; used[p] = true;
                }
            }
            for(ll j = 1; j <= n; j++) cout << ans[j] << " ";
            cout << '\n';
            return;
        }
        if(start[i+1] == 0){
            ans[i] = 1; ans[i+1] = 0;
            vector<bool> used(n+1,false);
            used[0] = used[1] = true;
            ll p = 0;
            for(ll j = 1; j <= n; j++){
                if(ans[j] == -1){
                    while(p <= n && used[p]) p++;
                    ans[j] = p; used[p] = true;
                }
            }
            for(ll j = 1; j <= n; j++) cout << ans[j] << " ";
            cout << '\n';
            return;
        }
    }
    ans[1] = 0; ans[2] = 2; ans[3] = 1;
    vector<bool> used(n+1,false);
    used[0] = used[1] = used[2] = true;
    ll p = 0;
    for(ll j = 1; j <= n; j++){
        if(ans[j] == -1){
            while(p <= n && used[p]) p++;
            ans[j] = p; used[p] = true;
        }
    }
    for(ll j = 1; j <= n; j++) cout << ans[j] << " ";
    cout << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++) solve(i);
}
