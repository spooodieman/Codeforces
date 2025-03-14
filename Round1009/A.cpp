#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(){
    ll a,b,c,d;
    cin >> a >> b >> c >> d;
    if(a == b && b == c && c == d){
        cout << "YES" << '\n'; 
    }
    else cout << "NO" << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll limit;
    cin >> limit;
    for(ll i = 0; i < limit; i++) solve();
}