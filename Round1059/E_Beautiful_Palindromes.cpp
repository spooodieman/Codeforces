#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define invl(v) for(auto &x: v) cin >> x;
#define all(v) (v).begin(), (v).end()

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(ll tt = 0){
    ll n,k; cin >> n >> k;
    vector<ll> arr(n); invl(arr);
    vector<ll> count(n+1,0);
    for(ll i = 0; i < n; i++){
        count[arr[i]]++;
    }
    ll x = -1;
    for(ll i = 1; i <= n; i++){
        if(count[i] == 0){
            x = i;
            break;
        }
    }
    if(x == -1){
        for(ll i = 0; i < k; i++) cout << arr[n-3 + (i%3)] << " ";
        cout << '\n';
    }
    else{
        ll y = -1;
        for(ll i =1; i <= n; i++){
            if(i != x && i != arr[n-1]){
                y = i;
                break;
            }
        }
        vector<ll> curr = {x,y,arr[n-1]};
        for(ll i = 0; i < k; i++) cout << curr[i%3] << " ";
        cout << '\n';
    }
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}