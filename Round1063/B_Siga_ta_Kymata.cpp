#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) (v).begin(), (v).end()

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(ll tt = 0){
    ll n; cin >> n;
    vector<ll> arr(n); for(auto &i : arr) cin >> i;
    string s; cin >> s;
    if((s.front() | s.back()) == '1'){
        cout << "-1\n";
        return;
    }
    ll oneInd = 0;
    ll nInd = 0;
    for(ll i = 0; i < n; i++){
        if(arr[i] == 1 && s[i] == '1'){
            cout << "-1\n";
            return;
        }
        if(arr[i] == 1){
            oneInd = i;
        }
        if(arr[i] == n && s[i] == '1'){
            cout << "-1\n";
            return;
        }
        if(arr[i] == n){
            nInd = i;
        }
    }
    cout << 5 << '\n';
    cout << 1 << " " << oneInd + 1 << '\n';
    cout << 1 << " " << nInd + 1 << '\n';
    cout << oneInd +1  << " " << n << '\n';
    cout << nInd + 1 << " " << n << '\n';
    cout << min(oneInd + 1,nInd + 1) << " " << max(nInd + 1,oneInd + 1) << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1;
    cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}