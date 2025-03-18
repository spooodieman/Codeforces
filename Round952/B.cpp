#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(){
    ll n; cin >> n;
    ll curr = 0;
    ll mx = 0;
    ll answer = 0;
    for(ll i = 2; i <= n; i++){
        curr = 0;
        for(ll j = 1; j * i <= n; j++){
            curr += j * i;
        }
        if(curr > mx){
            answer = i;
            mx = curr;
        }
    }
    cout << answer << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll limit;
    cin >> limit;
    for(ll i = 0; i < limit; i++) solve();
}