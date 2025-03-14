#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(){
    ll size, size2;
    cin >> size >> size2;
    vector<ll> vals(size);
    for(ll &x: vals) cin >> x;
    ll m; cin >> m;
    if(size == 1){
        cout << "YES" << '\n';
        return;
    }
    vals[size - 1] = max(vals[size-1],m - vals[size-1]);
    for(int i = size - 2; i >= 0; i--){
        ll temp = m - vals[i];
        if(vals[i] == vals[i+1]) continue;
        if(vals[i] > vals[i+1] && temp > vals[i+1]){
            cout << "NO" << '\n';
            return;
        }
        if(temp <= vals[i+1] && vals[i] > vals[i+1])vals[i] = temp; 
        else if(temp > vals[i+1]) continue;
        else vals[i] = max(temp,vals[i]);
    }
    for(int i = 0; i < vals.size() - 1; i++){ 
        if(vals[i] > vals[i+1]){
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