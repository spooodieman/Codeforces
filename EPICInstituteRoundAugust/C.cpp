#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

ll distance(ll xt, ll yt, ll xs, ll ys){
    return (xt - xs) * (xt-xs) + (yt-ys) * (yt-ys);
}

void solve(){
    ll size; cin >> size;
    vector<ll> x(size);
    vector<ll> y(size);
    for(ll i = 0; i < size; i++){
        cin >> x[i];
        cin >> y[i];
    }
    ll xs,ys,xt,yt; cin >> xs >> ys >> xt >> yt;
    ll dist1 = distance(xt,yt,xs,ys);
    for(ll i = 0; i < size; i++){
        if(distance(xt,yt,x[i],y[i]) <= dist1){
            cout << "NO" << '\n';
            return;
        }
    }
    cout << "YES" << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll limit;
    cin >> limit;
    for(ll i = 0; i < limit; i++) solve();
}