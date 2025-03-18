#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(){
    ll n,k; cin >> n >> k;
    ll answer = 0;
    if(n % 2 == 0){
        if(k%2) {
            k--;
        }
        answer += (n/k) + ((n%k == 0)?0:1);
        cout << answer << '\n';
        return;
    }
    answer++;
    if(k%2){
        n-=k;
        k--;
        answer += (n/k) + ((n%k == 0)?0:1);
        cout << answer << '\n';
    }
    else{
        n -= (k-1);
        answer += (n/k) + ((n%k == 0)?0:1);
        cout << answer << '\n';
    }
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll limit;
    cin >> limit;
    for(ll i = 0; i < limit; i++) solve();
}