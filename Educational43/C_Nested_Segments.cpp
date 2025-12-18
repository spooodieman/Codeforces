#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define invl(v) for(auto &x: v) cin >> x;
#define all(v) (v).begin(), (v).end()

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(ll tt = 0){
    ll n; cin>> n;
    vector<pair<pair<ll,ll>,ll>> arr(n); 
    for(int i = 0; i < n; i++){
        ll x,y; cin >> x >> y;
        arr[i] = {{x,y},i};
    }
    sort(all(arr),[] (const pair<pair<ll,ll>,ll> &a, pair<pair<ll,ll>,ll> &b){
        if(a.first.first == b.first.first) return a.first.second > b.first.second;
        return a.first.first < b.first.first;
    });

    set<pair<ll,ll>> curr;
    for(int i = 0; i < n; i++){
        while(!curr.empty() && curr.begin()->first < arr[i].first.first){
            curr.erase(curr.begin());
        }
        if(!curr.empty() && ((--curr.end())->first) >= arr[i].first.second){
            cout << arr[i].second + 1 << " " << (--curr.end())->second + 1;
            return;
        }
        curr.insert({arr[i].first.second,arr[i].second});
    }
    cout << "-1 -1";
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
        solve();
}