#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(){
    ll size,k;
    cin >> size >> k;
    ll curr = 0;
    ll least = 1e9;
    for(ll i = 0; i < size; i++){
        ll val; cin >> val;
        val %= k;
        least = min(least,val);
    }
    cout << least << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll limit;
    cin >> limit;
    for(ll i = 0; i < limit; i++) solve();
}