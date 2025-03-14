#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

bool isprime(ll sq){
    for(ll i = 2; i * i <= sq; i++){
        if(sq%i == 0) return false;
    }
    return true;
}

void solve(){
    ll size; cin >> size;
    for(ll i = 0; i < size; i++){
        ll curr = 0;
        ll val; cin >> val;
        ll sq = sqrt(val);
        if(sq *sq == val && val != 1 && isprime(sq)) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    solve();
}