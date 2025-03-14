#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(){
    ll size; cin >> size;
    ll firstOdd = 0;
    ll firstEven = 0;
    ll count = 0;
    for(ll i = 0; i < size; i++){
        ll val; cin >> val;
        if(val%2 && firstOdd == 0) firstOdd = i+1;
        else if(val%2 == 0 && firstEven == 0) firstEven = i+1;
        count += (val&1);
    }
    if(count == 1) cout << firstOdd << '\n';
    else cout << firstEven << '\n';

}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    solve();
}