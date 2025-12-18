#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) (v).begin(), (v).end()

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(ll tt = 0){
    ll n,q; cin >> n >> q;
    vector<pair<ll,ll>> arr(n);
    for(ll i =0; i < n; i++){
        ll x; cin >> x;
        arr[i] = {x,0};
    }
    ll sum = 0;
    for(ll i = 0; i < n; i++) sum += arr[i].first;
    ll lastSecond = -1;
    ll lastSecondval = -1;
    for(ll i = 1; i <= q; i++){
        ll x; cin >> x;
        if(x == 2){
            ll val; cin >>val;
            lastSecond = i;
            sum = n * val;
            lastSecondval = val;
        }
        else{
            ll ind, val; cin >> ind >> val;
            ind--;
            if(arr[ind].second > lastSecond){
                sum -= arr[ind].first;   
            }
            else{
                sum -= lastSecondval;
            }
            arr[ind].first = val;
            arr[ind].second = i;
            sum += arr[ind].first;
        }
        cout << sum << '\n';
    }
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1;
    //cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}