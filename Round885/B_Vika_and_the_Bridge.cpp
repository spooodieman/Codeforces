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
    vi last(k,-1);
    vi maxstep(k,0), max2step(k,0);
    f(i,0,n){
        ll step = i - last[arr[i]-1];
        if(step > maxstep[arr[i]-1]) {
            max2step[arr[i]-1] = maxstep[arr[i]-1];
            maxstep[arr[i]-1] = step;
        }
        else if(step > max2step[arr[i]-1]) max2step[arr[i]-1] = step;
        last[arr[i] - 1] = i;
    }

    for (int i = 0; i < k; ++i) {
        int step = n - last[i];
        if (step > maxstep[i]) {
            max2step[i] = maxstep[i];
            maxstep[i] = step;
        } 
        else if (step > max2step[i]) {
            max2step[i] = step;
        }
    }

    ll ans = INF;
    f(i,0,k){
        ans = min(ans,max((maxstep[i]+1)/2,max2step[i]));
    }
    cout << ans -1 << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}