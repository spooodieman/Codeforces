#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(){
    ll size,k;
    cin >> size >> k;
    ll val = 0;
    for(ll i = 0; i < size; i++){
        ll curr; cin >> curr;
        val += curr;
    }
    if(val == k * size)cout << "YES" << '\n';
    else cout << "NO" << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll limit;
    cin >> limit;
    for(ll i = 0; i < limit; i++) solve();
}