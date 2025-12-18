#define AR AnmolRai
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) (v).begin(), (v).end()

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

string decbin(ll n){
    string s = "";
    while(n){
        if(n&1) s += '1';
        else s += '0';
        n >>= 1;
    }
    while(s.size() <= 8) s.push_back('0');
    reverse(all(s));
    return s;
}

void solve(ll tt = 0){
    ll n; cin >> n;
    vector<ll> arr;
    for(ll i = 2; i <= 10; i++) arr.push_back(i);
    ll siz = arr.size();
    ll ans = 0;
    for(ll i = 1; i < (1LL << siz); i++){
        ll popcount = __builtin_popcount(i);
        ll curr = 1;
        for(ll j = 0; j < siz; j++){
            if((1LL << j)&i) curr = (curr* arr[j])/__gcd(curr,arr[j]);
        }
        curr = n/curr;
        if(popcount&1) ans += curr;
        else ans -= curr;
    }
    cout << n - ans << '\n';

}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1;
    //cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}