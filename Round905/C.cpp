#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(){
    ll size,k;
    cin >> size >> k;
    ll least = 1e9;
    if(k != 4){
        for(ll i = 0; i < size; i++){
            ll val; cin >> val;
            val %= k;
            if(val == 0){
                least = 0;
            }
            least = min(least,k-val);
        }
        cout << least << '\n';
    }
    else{
        ll even = 0;
        for(ll i = 0; i < size; i++){
            ll val; cin >> val;
            if(val%2 == 0) even++;
            val %= 4;
            if(val == 0){
                least = 0;
            }
            else if(val == 3){
                least = min(least,1LL);
            }
            //cout << val << " " << least << '\n';
        }
        even = min(even,2LL);
        cout << min(least,2 - even) << '\n';
    }
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll limit;
    cin >> limit;
    for(ll i = 0; i < limit; i++) solve();
}