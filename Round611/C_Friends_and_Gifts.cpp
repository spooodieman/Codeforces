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
    for(auto &i : arr) cin >> i;
    set<ll> curr;
    set<ll> trob;
    set<ll> st(all(arr));
    for(ll i = 1; i <= n; i++){
        if(!st.count(i) && arr[i-1] == 0) {
            trob.insert(i);
        }
        else if(!st.count(i)){
            curr.insert(i);
        }
    }
    
    for(ll i = 0; i < n; i++){
        if(arr[i] == 0 && trob.count(i+1)){
            if(trob.size() == 1){
                arr[i] = *(curr.begin());
                curr.erase(curr.begin());
            }
            else{
                if(*(--trob.end()) == i+1){
                    arr[i] = *(trob.begin());
                    trob.erase(trob.begin());
                }
                else{
                    arr[i] = *(--trob.end());
                    trob.erase(--trob.end());
                }
            }
        }
    }
    for(ll i = 0; i < n ; i++){
        if(arr[i] == 0){
            if(trob.size()){
                arr[i] = *(trob.begin());
                trob.erase(trob.begin());
            }
            else{
                arr[i] = *(curr.begin());
                curr.erase(curr.begin());
            }
        }
    }
    for(ll i : arr) cout << i << " ";
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1;
    //cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}