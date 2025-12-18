#define AR AnmolRai
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) (v).begin(), (v).end()

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(ll tt = 0){
    ll n,k; cin >> n >> k;
    vector<ll> arr(n); for(auto &i : arr) cin >> i;
    bool solve = true;
    for(ll i = 0; i < n; i ++){
        if(arr[i]%k != 0){
            solve = false;
            break;
        }
    }
    if(solve){
        cout << "-1\n";
        return;
    }
    
    ll sum = 0;
    for(ll i = 0; i < n; i++) sum += arr[i];
    if(sum % k != 0){
        cout << n << '\n';
        return;
    }

    ll l = 0;
    ll r = 0;
    for(ll i = 0; i < n; i++){
        l++;
        if(arr[i]%k != 0){
            break;
        }    
    }
    for(ll i =n-1; i >= 0; i--){
        r++;
        if(arr[i]%k != 0){
            break;
        }    
    }
    cout << n - min(l,r) << '\n';

}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1;
    cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}