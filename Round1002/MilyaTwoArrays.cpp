#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(){
    ll n; cin >> n;
    set<ll> set1;
    for(int i = 0; i < n; i++){
        ll val; cin >> val;
        set1.insert(val);
    }
    set<ll> set2;
    for(int i = 0; i < n; i++){
        ll val; cin >> val;
        set2.insert(val);
    }
    cout << (set1.size() + set2.size() > 3 ? "YES" : "NO") << '\n';
}

int main(){
    long limit;
    cin >> limit;
    for(long i = 0; i < limit; i++) solve();
}