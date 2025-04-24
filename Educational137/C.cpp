#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define invl(v) for(auto &x: arr) cin >> x;
#define all(v) (v).begin(), (v).end()

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(){  
    ll n; cin >> n;
    string s; cin >> s;
    vector<ll> arr(n);
    invl(arr);
    for(ll i = 1; i < n; i++){
        if(s[i] == '1'){
            if(s[i-1] == '1') continue;
            if(arr[i-1] >= arr[i]){
                swap(s[i],s[i-1]);
            }
        }
    }
    ll answer = 0;
    for(ll i = 0; i < n; i++){
        if(s[i] == '1') answer += arr[i];
    }
    cout << s << '\n';
    cout << answer << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll limit;
    cin >> limit;
    for(ll i = 0; i < limit; i++) solve();
}