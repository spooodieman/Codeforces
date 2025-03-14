#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(){
    ll x, y; cin >> x >> y;
    ll difference = x+1 -y;
    if(difference >= 0 && difference % 9 == 0){
        cout << "YES" << '\n'; 
    }
    else cout << "NO" << '\n';

}

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    long limit;
    cin >> limit;
    for(long i = 0; i < limit; i++) solve();
}