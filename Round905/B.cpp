#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(){
    map<char,ll> freq;
    ll size,k; cin >> size >> k;
    string message; cin >> message;
    for(ll i = 0; i < size; i++) freq[message[i]]++;
    ll odd = 0;
    for(auto x: freq) if(x.second%2) odd++;
    if(odd > k+1){
        cout << "NO" << '\n';
    }
    else cout << "YES" << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll limit;
    cin >> limit;
    for(ll i = 0; i < limit; i++) solve();
}