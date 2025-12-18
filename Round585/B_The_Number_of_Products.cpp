#define AR AnmolRai
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) (v).begin(), (v).end()

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(ll tt = 0){
    ll n; cin >> n;
    vector<ll> arr(n);
    for(auto &i : arr) cin >> i;
    ll negCount = 0;
    ll oddSum = 0;
    ll evenSum = 0;
    ll ans = 0;
    for(ll i = 0; i < n; i ++){
        if(arr[i] > 0){
            if(negCount%2 == 0){
                evenSum++;
                ans += evenSum;
            }
            else{
                oddSum++;
                ans += oddSum;
            }
        }
        else{
            negCount++;
            if(negCount >= 2 && negCount%2 == 0){
                evenSum++;
                ans += evenSum;
            }
            else if(negCount >= 2){
                oddSum++;
                ans += oddSum;
            }
        }
    }
    cout << (n*(n+1))/2 - ans << " " << ans << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1;
    //cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}