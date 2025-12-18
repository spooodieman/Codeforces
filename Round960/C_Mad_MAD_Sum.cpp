#define AR AnmolRai
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) (v).begin(), (v).end()

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(ll tt = 0){
    ll n; cin >> n;
    vector<ll> arr(n);
    for(auto &i: arr) cin >> i;
    map<ll,ll> freq;
    ll currmx = 0;
    ll sum = 0;

    for(ll i = 0; i < n; i++){
        sum += arr[i];
        freq[arr[i]]++;
        if(freq[arr[i]] == 2) currmx = max(currmx,arr[i]);
        arr[i] = currmx;
    }

    freq.clear();
    currmx = 0;
     
    for(ll i = 0; i < n; i++){
        sum += arr[i];
        freq[arr[i]]++;
        if(freq[arr[i]] == 2) currmx = max(currmx,arr[i]);
        arr[i] = currmx;
    }


    for(ll i = 0; i < n; i++){
        sum += (n-i) * arr[i];
    }
    cout << sum << '\n';
    
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1;
    cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}