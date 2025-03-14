#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

int a[200001];
ll psum[200001];

int f(int i){
    int answer = 0;
    while(i){
        i/= 3;
        answer++;
    }
    return answer;
}

void solve(){
    ll l, r; cin >> l >> r;
    cout << (a[l] + psum[r] - psum[l-1]) << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    for(int i = 1; i <= 200000; i++){
        a[i] = f(i);
        psum[i] = psum[i-1] + a[i];
    }
    ll limit;
    cin >> limit;
    for(ll i = 0; i < limit; i++) solve();
}