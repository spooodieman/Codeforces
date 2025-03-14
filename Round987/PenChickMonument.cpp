#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(){
    ll size;
    cin >> size;
    vector<ll> vals(size);
    map<ll,ll> freq;
    ll maxFreq = 1;
    for(ll i = 0; i < size; i++){
        ll val;
        cin >> val;
        freq[val]++;
        maxFreq = max(maxFreq,freq[val]);
    }

    cout << size - maxFreq << '\n';
}

int main(){
    long limit;
    cin >> limit;
    for(long i = 0; i < limit; i++) solve();
}