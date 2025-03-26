#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(){
    ll size,k; cin >> size >> k;
    vector<ll> vals(size+1,0);
    ll sum = 0;
    for(ll i = 1; i <= size; i++){
        cin >> vals[i];
        sum += vals[i];
    }
    ll mex = ((size)*(size+1))/2 - sum;
    vals[0] = mex;
    k %= (size+1);
    ll index = 1 - k;
    if(index < 0) index += size+1;
    for(ll i = 0; i < size; i++){
        cout << vals[index] << " ";
        index++;
        index%=(size+1);
    }
    cout << '\n';
    
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll limit;
    cin >> limit;
    for(ll i = 0; i < limit; i++) solve();
}