#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define invl(v) for(auto &x: v) cin >> x;
#define all(v) (v).begin(), (v).end()

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(){
    ll n; cin >> n;
    string s,t; cin >> s >> t;
    ll odd = 0;
    ll even = 0;
    for(ll i = 0; i < n; i++){
        if(i%2==0 && s[i] == '1') odd++;
        else if (s[i] == '1') even++;
    }
    for(ll i = 0; i < n; i++){
        if(i%2==0 && t[i] == '1') even++;
        else if (t[i] == '1') odd++;
    }
    if(n&1){
        if(even <= (n/2+1) && odd <= n/2){
            cout << "YES" << '\n';
            return;
        }
    }
    else{
        if(even <= n/2 && odd <= n/2){
            cout << "YES" << '\n';
            return;
        }
    }
    cout << "NO" << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll limit;
    cin >> limit;
    for(ll i = 0; i < limit; i++) solve();
}