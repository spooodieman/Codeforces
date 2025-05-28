#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define invl(v) for(auto &x: v) cin >> x;
#define all(v) (v).begin(), (v).end()

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;


void solve(){
    ll n; cin >> n;
    vector<ll> arr(n);
    invl(arr);
    bool solved = false;
    ll ind = 0;
    ll max = 0;
    
    for(ll i = 0; i < n; i++){
        if(arr[i] > max){
            ind = i;
            max = arr[i];
        }
        if(arr[i] != arr[(((i-1) < 0)?(0):(i-1))]) solved = true;
    }
    if(solved){
        cout << "YES" << '\n';
        for(ll i = 0; i < n; i++){
            if(i == ind) cout << "2 ";
            else cout << "1 ";
        }
        cout << '\n';
    }
    else cout << "NO" << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll limit;
    cin >> limit;
    for(ll i = 0; i < limit; i++) solve();
}