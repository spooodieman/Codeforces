#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) (v).begin(), (v).end()

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(ll tt = 0){
    ll n; cin >> n;
    string s; cin >> s;
    for(ll i = 0; i <= n-4; i++){
        string curr = s.substr(i,4);
        if(curr == "1011" || curr == "1101"){
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1;
    cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}