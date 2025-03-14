#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(){
    ll size; cin >> size;
    size *= 2;
    vector<ll> vals(size);
    for(ll i = 0; i < size; i++) cin >> vals[i];
    sort(vals.begin(),vals.end());
    ll l = 0;
    ll r = size -1;
    ll value = 0;
    for(ll i = size/2; i < size; i++){
        value += vals[i];
    }
    for(ll i = 0; i < size/2; i++){
        value -= vals[i];
    }
    cout << value << " ";
    l = 0;
    r = size/2;
    while(r < size){
        cout << vals[r] << " " << vals[l] << " ";
        r++; 
        l++;
    }
    cout << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll limit;
    cin >> limit;
    for(ll i = 0; i < limit; i++) solve();
}