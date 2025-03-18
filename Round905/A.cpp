#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(){
    string message; cin >> message;
    ll curr = 1;
    ll answer = 0;
    for(ll i = 0; i < 4; i++){
        ll val = message[i] - '0';
        if(val == 0){
            val = 10;
        }
        answer += abs(val - curr) + 1;
        curr = val;
    }
    cout << answer << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll limit;
    cin >> limit;
    for(ll i = 0; i < limit; i++) solve();
}   