#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(){
    ll size; cin >> size;
    string message; cin >>message;
    char target = '0';
    ll answer = 0;
    for(ll i = 0; i < size; i++){
        if(message[i] != target){
            answer++;
            if(target == '1') target = '0';
            else target = '1';
        }
    }
    cout << answer << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    long limit;
    cin >> limit;
    for(long i = 0; i < limit; i++) solve();
}