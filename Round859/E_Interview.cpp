#define AR AnmolRai
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) (v).begin(), (v).end()

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void recurs(vector<ll> &pref, ll l, ll r){
    if(l == r){
        cout << "! " << l << endl;
        return; 
    }
    ll mid = (l+r)/2;
    ll x;
    cout << "? " << mid-l+1;
    for(ll i = l; i <= mid; i++) cout << " " << i;
    cout << endl;
    cin >> x;
    if(x == pref[mid] - pref[l-1]) recurs(pref,mid+1,r);
    else recurs(pref,l,mid);
}

void solve(ll tt = 0){
    ll n; cin >> n;
    vector<ll> arr(n); for(auto &i : arr) cin >> i;
    vector<ll> pref(n+1,0);
    for(ll i = 1; i <= n; i++) pref[i] = pref[i-1] + arr[i-1];
    recurs(pref,1,n);
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1;
    cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}