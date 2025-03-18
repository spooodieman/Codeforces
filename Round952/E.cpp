#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(){
    ll x,y,z,k; cin >> x >> y >> z >> k;
    ll area = 0;
    ll answer = 0;
    for(ll i = 1; i <= x; i++){
        for(ll j = 1; j <= y; j++){
            ll a = k/(i*j);
            if(i*j*a != k) continue;
            answer = max(answer,((x-i) + 1)  * ((y-j) + 1) * ((z-a) + 1));  
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