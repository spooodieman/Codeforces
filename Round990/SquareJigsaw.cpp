#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(){
    ll size; cin >> size;
    ll answer = 0;
    ll value = 0;
    for(int i= 0; i < size; i++){
        ll val; cin >> val;
        value += val;
        ll curr = sqrt(value);
        if((curr * curr == value) && (curr%2 == 1))answer++;
    }
    cout << answer << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    long limit;
    cin >> limit;
    for(long i = 0; i < limit; i++) solve();
}