#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(){
    string s1, s2;
    cin >> s1 >> s2;
    for(ll i = 0; i < s1.size(); i++){
        char c1 = tolower(s1[i]);
        char c2 = tolower(s2[i]); 
        if(c1 > c2){
            cout << 1 << '\n';
            return;
        }
        else if(c2 > c1){
            cout << -1 << '\n';
            return;
        }
    }
    cout << 0 << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    solve();
}