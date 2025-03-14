#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

bool isSquare(ll num){
    ll sq = sqrt(num);
    if(sq * sq == num) return true;
    return false;
}

void solve(){
    ll size; cin >> size;
    if(isSquare((size * (size+1))/2)){
        cout << -1 << '\n';
        return;
    }
    vector<ll> vals(size);
    for(ll i = 0; i < size; i++){
        vals[i] = i+1;
    }
    ll value = 0;
    bool swapped = false;
    for(ll i = 0; i < size-1; i++){
        if(swapped) value += vals[i-1];
        else value += vals[i];
        swapped = false;
        if(isSquare(value)){
            swap(vals[i],vals[i+1]);
            swapped = true;
        }
    }
    for(ll x : vals) cout << x << " ";
    cout << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll limit;
    cin >> limit;
    for(ll i = 0; i < limit; i++) solve();
}