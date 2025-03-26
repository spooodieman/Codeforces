#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(){
    ll size; cin >> size;
    vector<ll> vals(size);
    for(auto &x : vals) cin >> x;
    bool hasZero1 = false;
    bool hasZero2 = false;
    if(vals[size - 1] == 0 || vals[size-2] == 0){
        hasZero2 = true;
    }
    for(ll i = 0; i < size-2; i++){
        if(vals[i] == 0){
            hasZero1 = true;
            break;
        }
    }
    ll answer = 1 + hasZero1 + hasZero2;
    cout << answer << '\n';
    if(answer == 1){
        cout << 1 << " " << size << '\n';
        return;
    }
    else if(hasZero1 && !hasZero2){
        cout << 1 << " " << size-2 << '\n';
        cout << 1 << " " << 3 << '\n';
        return;
    }
    else if(!hasZero1 && hasZero2){
        cout << size - 1 << " " << size << '\n';
        cout << 1 << " " << size-1 << '\n';
        return;
    }
    else{
        cout << size-1 << " " << size << '\n';
        cout << 1 << " " << size-2 << '\n';
        cout << 1 << " " << 2 << '\n';
    }

}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll limit;
    cin >> limit;
    for(ll i = 0; i < limit; i++) solve();
}