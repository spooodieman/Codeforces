#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define invl(v) for(auto &x: v) cin >> x;
#define all(v) (v).begin(), (v).end()
#define f(p,q,n) for(ll p = q; p < n; p++)
#define YES cout << "Sasha\n"
#define NO cout << "Anna\n"
#define vi vector<ll>

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(ll tt = 0){
    ll n,m; cin >> n >> m;
    vi arr(n); invl(arr);
    vi cop = arr;
    ll tot = 0;
    f(i,0,n){
        while(arr[i]){
            tot++;
            arr[i] /= 10;
        }
    }
    vi zero;
    f(i,0,n){
        ll count = 0;
        while(cop[i]%10 == 0 && cop[i] > 0){
            count++;
            cop[i]/=10;
        }
        if(count > 0) zero.push_back(count);
    }
    sort(all(zero));
    reverse(all(zero));
    for(ll i = 0; i < zero.size(); i+= 2){
        tot -= zero[i];
    }
    if(tot > m) YES;
    else NO;
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}