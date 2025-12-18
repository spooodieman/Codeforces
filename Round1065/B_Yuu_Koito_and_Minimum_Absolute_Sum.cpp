#define AR AnmolRai
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) (v).begin(), (v).end()

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(ll tt = 0){
    ll n; cin >> n;
    vector<ll> arr(n); for(auto &i : arr) cin >> i;
    if(arr.front() == -1 && arr.back() == -1){
        arr.front() = 0;
        arr.back() = 0;
    }
    else if(arr.front() == -1){
        arr.front() = arr.back();
    }
    else if(arr.back() == -1){
        arr.back() = arr.front();
    }
    for(ll i = 0; i < n; i++) if(arr[i] == -1) arr[i] = 0;
    cout << abs(arr.back() - arr.front()) << '\n';
    for(ll i : arr) cout << i << " ";
    cout << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1;
    cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}