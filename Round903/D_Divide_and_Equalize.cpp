#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define invl(v) for(auto &x: v) cin >> x;
#define all(v) (v).begin(), (v).end()
#define f(p,q,n) for(ll p = q; p < n; p++)
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define vi vector<ll>

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(ll tt = 0){
    ll n; cin >> n;
    vi arr(n); invl(arr);
    map<ll,ll> freq;
    f(i,0,n){
        while(arr[i]%2 == 0){
            freq[2]++;
            arr[i] /= 2;
        }
        for(int j = 3; j * j <= arr[i]; j = j+2){
            while (arr[i]%j == 0){
                freq[j]++;
                arr[i]/= j;
            }
        }
        if (arr[i] > 2) freq[arr[i]]++;
    }
    for(auto x : freq){
        if(x.second%n){
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
        solve(i);
}