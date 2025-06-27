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
    vi arr(n); invl(arr);
    bool ascend = true;
    if(arr[1] < arr[0]) ascend = false;
    for(ll i = 1; i < n; i++){
        if(ascend && arr[i] < arr[i-1]){
            NO;
            return;
        }
        else if(!ascend && arr[i] > arr[i-1]){
            NO;
            return;
        }
    }
    ll diff = abs(arr[1] - arr[0]);
    for(int i = 2; i < n; i++){
        if(abs(arr[i] - arr[i-1]) != diff){
            NO;
            return;
        }
    }
    ll mult = 1;
    if(ascend){
        for(ll &i :arr) 
            i -= (diff * mult++);
    }

    else{
        for(int i = n-1; i>= 0; i--)
            arr[i] -= (diff * mult++);
    }

    for(ll i = 1; i < n; i++){
        if(arr[i] != arr[i-1] || arr[i] < 0){
            NO;
            return;
        }
    }
    for(ll i = 0; i < n; i++){
        if(arr[i]%(n+1) != 0){
            NO;
            return;
        }
    }
    YES;

}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve();
}