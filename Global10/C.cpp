#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define invl(v) for(auto &x: v) cin >> x;
#define all(v) (v).begin(), (v).end()

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(){
    ll n ; cin >> n;
    vector<ll> arr(n);
    invl(arr);
    ll answer = 0;
    ll diff = 0;
    bool changing = false;
    for(ll i = 1; i < n; i++){
        if(arr[i] >= arr[i-1] + diff){
            answer += diff;
            diff = 0;
        }
        else{            
            diff += arr[i-1] - arr[i]; 
        }
    }
    answer += diff;
    cout << answer << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll limit;
    cin >> limit;
    for(ll i = 0; i < limit; i++) solve();
}