#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(){
    ll size; cin >> size;
    vector<ll> vals(size);
    for(ll i = 0; i < size; i++) cin >> vals[i];
    if(size == 1){
        cout << 1 << '\n';
        return;
    }
    else if(size == 2){
        cout << (vals[0] + vals[1])/2 << '\n';
        return;
    }
    sort(vals.begin(),vals.end());
    vector<ll> difference;
    for(ll i = 1; i < size; i++){
        difference.push_back(vals[i]-vals[i-1]);
    }
    sort(difference.begin(),difference.end());
    cout << difference[difference.size()-2] << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll limit;
    cin >> limit;
    for(ll i = 0; i < limit; i++) solve();
}