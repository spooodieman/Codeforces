#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define invl(v) for(auto &x: v) cin >> x;
#define all(v) (v).begin(), (v).end()
#define fl(p,n) for(ll p = 0; p < n; p++)
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define vi vector<ll>

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(ll tt = 0){
    ll n; cin >> n;
    vector<ll> arr;
    arr.push_back(-1e9);
    for(ll i = 0; i < n; i++){
        ll curr; cin >> curr;
        if(curr != arr.back()){
            arr.push_back(curr);
        }
    }
    arr.push_back(-1e9);
    ll ans = 0;
    for (int i = 1; i < arr.size() - 1; i++) 
        if (arr[i - 1] < arr[i] && arr[i] > arr[i + 1]) ans++;
        cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll limit;
    cin >> limit;
    for(ll i = 1; i <= limit; i++) solve(i);
}