#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) (v).begin(), (v).end()

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(ll tt = 0){
    ll l = 1;
    ll r = 999;
    ll ans = 999;
    while(l <= r){
        ll mid1 = l + (r-l)/3;
        ll mid2 = r - (r-l)/3;
        ll x;
        cout << "? " << mid1 << " " << mid2 << endl;
        cin >> x;
        if(x == (mid1+1) * (mid2+1)){
            ans = mid1;
            r = mid1-1;
        }
        else if(x == mid1*mid2){
            l = mid2+1;
        }
        else{
            ans = mid2;
            l = mid1+1;
            r = mid2-1;
        }
    }
    cout << "! " << ans << endl;
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1;
    cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}