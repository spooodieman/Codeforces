#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) (v).begin(), (v).end()

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(ll tt = 0){
    ll n; cin >> n;
    vector<ll> a(26,0),b(26,0);
    string s,t; cin >> s >> t;
    for(ll i =0 ; i < n; i++){
        a[s[i]-'a']++;
        b[t[i]-'a']++;
    }
    for(ll i = 0; i < 26; i++){
        if(a[i] != b[i]){
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