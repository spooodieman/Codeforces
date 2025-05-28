#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define invl(v) for(auto &x: v) cin >> x;
#define all(v) (v).begin(), (v).end()

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(){
    ll n; cin >> n;
    vector<ll> arr(n);
    invl(arr);
    ll mx = 0;
    ll count = 0;
    ll sum = 0;
    bool s1 = false;
    bool s2 = false;
    for(ll x: arr){
        mx = max(mx,x);
        if(x%2){
            s1 = true;
            count++;
        }
        else{
            s2 = true;
        }
        sum += x;
    }
    if(s1 && s2 )cout << (sum - count) + 1 << '\n';
    else cout << mx << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll limit;
    cin >> limit;
    for(ll i = 0; i < limit; i++) solve();
}