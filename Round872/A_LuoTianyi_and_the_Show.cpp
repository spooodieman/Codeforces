#define AR AnmolRai
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) (v).begin(), (v).end()

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(ll tt = 0){
    ll n,m; cin >> n >> m;
    vector<ll> arr(m,-3);
    ll lef = 0,rig = 0;
    for(ll i = 0; i < n; i++){
        ll x; cin >> x;
        if(x == -1) lef++;
        else if(x == -2) rig++;
        else{
            x--;
            arr[x] = 1;
        }
    }
    bool found = false;
    for(ll i = 0 ; i < m ; i++){
        if(arr[i] != -3) break;
        else if(rig){
            arr[i] = 1;
            rig--;
        }
    }
    found = false;
    for(ll i = m-1 ; i >= 0 ; i--){
        if(arr[i] != -3) break;
        else if(lef){
            arr[i] = 1;
            lef--;
        }
    }
    
    for(ll i = 0; i < m; i++){
        if(arr[i] == -3 && lef){
            arr[i] = 1;
            lef--;
        }
    }
    ll count = 0;
    for(ll i : arr) count += i == 1;
    cout << count << '\n';
    
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1;
    cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}