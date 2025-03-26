#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define invll(v) for(auto &x: v) cin >> x;
#define sortall(v) sort(v.begin(),v.end());

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(){
    ll size; cin >> size;
    vector<ll> vals(size);
    invll(vals);
    sortall(vals);
    bool common = false;
    ll side = 0;
 
    for(ll i = 1; i < size; i++){
        if(vals[i] == vals[i-1]){
            side = vals[i];
            vals.erase(vals.begin() + i - 1);
            vals.erase(vals.begin() + i - 1);
            common = true;
            break;
        }
    }
    if(!common){
        cout << -1 << '\n';
        return;
    }
    for(ll i = 1; i < size-2; i++){
        if((vals[i] - vals[i-1]) < (2 * side)){
            cout << vals[i] << " " << vals[i-1] << " " << side << " " << side << '\n'; 
            return;
        }
    }
    cout << -1 << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll limit;
    cin >> limit;
    for(ll i = 0; i < limit; i++) solve();
}