#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(){
    ll size, k; cin >> size >> k;
    if(size == 1){
        cout << k << '\n';
        return;
    }
    cout << 0 << " ";
    ll bits = 0;
    ll curr = 1;
    ll kCopy = k;
    while(k&1){
        bits++;
        k >>= 1;
    }
    ll maxNum = 0;
    ll multiplier = 1;
    ll sample = 0;
    for(ll i = 0; i < bits; i++){
        maxNum += multiplier;
        multiplier *= 2; 
    }
    for(ll i = 1; i <= maxNum; i++){ 
        if(curr == size - 1){
            if((sample | i) == kCopy){
                cout << i << '\n';
                return;
            }
            else{
                cout << kCopy << '\n';
                return;
            }
        }
        sample |= i;
        curr++;
        cout << i << " ";
    }
    while(curr != size){
        cout << kCopy << " ";
        curr++;
    }
    cout << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll limit;
    cin >> limit;
    for(ll i = 0; i < limit; i++) solve();
}