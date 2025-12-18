#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) (v).begin(), (v).end()

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(ll tt = 0){
    ll n,k,x; cin >> n >> k >> x;
    vector<ll> arr(n); for(auto &i : arr) cin >> i;
    sort(all(arr));
    ll l = 0;
    ll r = x;
    ll ans = 0;
    while(l <= r){
        ll mid = (l+r)/2;
        ll curr = 0;
        curr += max(0LL,arr.front() + 1 - mid);
        curr += max(0LL,(x - arr.back() + 1) - mid);

        for(ll i = 0; i < n-1;i++)
            curr += max(0LL, arr[i+1]-arr[i]+1 - (mid*2));
        
        if(curr >=k){
            ans = mid;
            l = mid+1;
        }
        else
            r = mid-1;
    }

    for(ll i = 0; i < arr.front(); i++){
        if(arr.front() - i >= ans && k > 0){
            cout << i << " ";
            k--;
        }
        else break;
    }

    for(ll i = x; i > arr.back(); i--){
        if(i - arr.back() >= ans && k > 0){
            cout << i << " ";
            k--;
        }
        else break;
    }
    set<ll> vis;
    for(ll i = 0; i < n-1; i++){
        for(ll j = arr[i] + ans; j + ans <= arr[i+1]; j++){
            if(vis.count(j)) continue;
            if(k <= 0) break;
            cout << j << " ";
            vis.insert(j);
            k--;
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