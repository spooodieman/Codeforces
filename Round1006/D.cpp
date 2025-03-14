#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(){
    ll size; cin >> size;
    vector<ll> vals(size, 0);
    ll x = 0;
    ll y = 0;
    ll maxDiff= 0;
    for(ll i = 0; i < size; i++) cin >> vals[i];
    for(ll i = 0; i < size; i++){
        ll curr = 0, curr2 = 0;
        for(ll j = i+1; j < size; j++){
            if(vals[i] > vals[j]){
                curr++;
            }
            else if(vals[i] < vals[j]){
                curr2++;
            }
            ll diff = curr2 - curr;
            if(diff < maxDiff){
                maxDiff = diff;
                x = i;
                y = j;
            }
        }
    }
    cout << x+1 << " " << y+1 << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll limit;
    cin >> limit;
    for(ll i = 0; i < limit; i++) solve();
}