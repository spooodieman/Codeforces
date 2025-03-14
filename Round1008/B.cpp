#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(){
    ll size, k; cin >> size >> k;
    if(k%2){
        for(ll i = 1; i <= size; i++){
            if(i == size){
                cout << size-1 << " ";
            }
            else cout << size << " ";
            
        }
        cout << '\n';
    }
    else{
        for(ll i = 1; i <= size; i++){
            if(i == size-1) cout << size << " ";
            else cout << size-1 << " ";
        }
        
    }
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll limit;
    cin >> limit;
    for(ll i = 0; i < limit; i++) solve();
}