#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(){
    ll size; cin >> size;
    ll odd = 0,even = 0;
    for(ll i = 0; i < size; i++){
        ll val;cin >> val;
        if(val%2)odd++;
        else even++; 
    }
    if(odd == 0) cout << 1 << '\n';
    else if(even == 0) cout << odd-1 << '\n';
    else cout << odd+1 << '\n';
    
}

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    long limit;
    cin >> limit;
    for(long i = 0; i < limit; i++) solve();
}