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
    ll n,extra,k; cin >> n >> extra >> k;
    vi arr(n); invl(arr);
    sort(all(arr));
    vi diff;
    f(i,0,n-1){
        ll curr = arr[i+1] - arr[i];
        if(curr > k){
            diff.push_back(curr);
        }
    }
    sort(all(diff));
    ll ans = diff.size() + 1;
    f(i,0,diff.size()){
        if(extra <= 0 || (diff[i]-1)/k > extra) break;
        else{
            extra -= (diff[i]-1)/k;
            ans--;
        }
    }
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
        solve();
}