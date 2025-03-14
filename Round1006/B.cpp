#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(){
    ll size;
    string message;
    cin >> size >> ws;
    cin >> message;
    map<char,ll> freq;
    for(ll i = 0; i < size; i++){
        freq[message[i]]++;
    }
    ll answer = (freq['-']/2) *(freq['-']/2 + (freq['-']&1)) * freq['_'];
    // cout << "MAP" << '\n';
    // for(auto x: freq) cout << x.first << ": " << x.second << '\n';
    cout << answer << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll limit;
    cin >> limit;
    for(ll i = 0; i < limit; i++) solve();
}   