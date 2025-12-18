#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) (v).begin(), (v).end()

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(ll tt = 0){
    ll n,h; cin >> n >> h;
    ll l = 1;
    ll r = n;
    ll ans = 2;
    vector<ll> arr(n); for(auto &i : arr) cin >> i;
    while(l <= r){
        ll mid = (l+r)/2;
        vector<ll> cop = arr;
        sort(cop.begin(),cop.begin() + mid);
        ll curr = 0;
        ll height = h;
        ll count = 0;
        bool ok = true;
        for(ll i = mid - 1; i >= 0; i--){
            if(count == 0){
                curr = cop[i];
                if(cop[i] > height){
                    ok = false;
                    break;
                }
                count++;
            }
            else{
                if(cop[i] > height){
                    ok = false;
                    break;
                }
                else{
                    height -= curr;
                    count = 0;
                }
            }
        }
        if(ok){
            ans = mid;
            l = mid+1;
        }
        else r = mid-1;
    }
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1;
   // cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}