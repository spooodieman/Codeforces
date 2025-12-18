#define AR AnmolRai
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) (v).begin(), (v).end()

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(ll tt = 0){
    ll x,n,q; cin >> x >> n >> q;
    vector<ll> arr(1,0), tim(1,0);
    for(ll i = 0; i < n; i++){
        ll x; cin >> x;
        arr.push_back(x);
    }
    for(ll i = 0; i < n; i++){
        ll x; cin >> x;
        tim.push_back(x);
    }

    for(ll i = 0; i < q; i++){
        ll x; cin >> x;
        ll ind = lower_bound(all(arr),x) - arr.begin();
        if(arr[ind] == x){
            cout << tim[ind] << " ";
        }
        else{
            double p = (arr[ind] - arr[ind-1])/((double)(tim[ind] - tim[ind-1]));
            ll ans = tim[ind-1] + (ll)((double)(x - arr[ind-1])/p);
            cout << ans << " ";
        }
    }
    cout << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1;
    cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}