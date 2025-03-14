#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(){
    ll size, k, p; cin >> size >> k >> p;
    k = abs(k);
    ll extra = (k%p != 0)?1:0;
    k /= p;
    k += extra;
    if(k > size){
        cout << -1 << '\n';
        return;
    }
    else cout << k << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll limit;
    cin >> limit;
    for(ll i = 0; i < limit; i++) solve();
}