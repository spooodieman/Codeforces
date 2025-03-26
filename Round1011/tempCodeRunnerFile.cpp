#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(){
    ll size, k; cin >> size >> k;
    ll count = 0;
    string message; cin >> message;
    for(ll i=  0; i < size/2; i++){
        if(message[i] >= message[size-1-i]) count++;
    }
    if(count <= k) cout << "YES" << '\n';
    else cout << "NO" << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll limit;
    cin >> limit;
    for(ll i = 0; i < limit; i++) solve();
}