#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(){
    ll size; cin >> size;
    vector<ll> vals(size);
    vector<ll> vals2(size);
    for(ll &x: vals) cin >> x;
    for(ll &x:vals2) cin >> x;
    ll greater = 0;
    ll required = 0;
    for(int i = 0; i < size; i++){
        if(vals2[i] > vals[i]){
            greater++;
            required = vals2[i] - vals[i];
        }
    }
    if(greater > 1){
        cout << "NO" << '\n';
        return;
    }
    else if(greater == 0){
        cout << "YES" << '\n';
        return;
    }
    for(ll i = 0; i < size; i++){
        if(vals[i] < vals2[i])continue;
        vals[i] -= required;
        if(vals[i] < vals2[i]){
            cout << "NO" << '\n';
            return;
        }
    }
    cout << "YES" << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    long limit;
    cin >> limit;
    for(long i = 0; i < limit; i++) solve();
}