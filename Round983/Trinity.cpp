#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(){
    ll size;
    cin >> size;
    vector<ll> vals(size);
    for(ll i = 0; i < size; i++){
        cin >> vals[i];
    }
    sort(vals.begin(),vals.end());
    for(ll x: vals)cout << x << " ";
    cout << '\n';
}

int main(){
    long limit;
    cin >> limit;
    for(long i = 0; i < limit; i++) solve();
}