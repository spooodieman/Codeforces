#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define invl(v) for(auto &x: v) cin >> x;
#define all(v) (v).begin(), (v).end()

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(){
    ll n; cin >> n;
    string message; cin >> message;
    if(message[n-1] == '1' || message[0] == '1'){
        cout << "YES" << '\n';
        return;
    }
    ll zero = 0;
    for(ll i = 0; i < n; i++) {
        zero += !(message[i] -'0');
    }
    if(zero <= n/2){
        cout << "YES" << '\n';
        return;
    }
    for(ll i = 1; i < n; i++){
        if(message[i] == '1' && message[i-1] == '1'){
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