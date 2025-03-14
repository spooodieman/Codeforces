#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(){
    ll num; cin >> num;
    ll numCopy = num;
    ll oneCount = 0;
    ll length = 0;
    while(numCopy){
        oneCount += (numCopy&1);
        numCopy >>= 1;
        length++;
    }
    if(oneCount == 1 || oneCount == length){
        cout << -1 << '\n';
        return;
    }
    ll multiplier = 2;
    ll answer = 0;
    ll lastbit = num&1;
    num >>= 1;
    while(true){
        ll currBit = num&1;
        if((lastbit == 0) && (currBit == 1)){
            cout << (multiplier + multiplier/2) << '\n';
            return;
        }
        if((lastbit == 1) && (currBit == 0)){
            cout << (multiplier + multiplier/2) << '\n';
            return;
        }
        lastbit = num&1;
        num >>= 1;
        multiplier*= 2;
    }
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll limit;
    cin >> limit;
    for(ll i = 0; i < limit; i++) solve();
}