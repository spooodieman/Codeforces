#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(){
    ll size,b,c; cin >> size >> b >> c;
    if(b == 0){
        if(c >= size-2){
            if(c >= size)cout << size << '\n'; 
            else cout << size-1 << '\n';
        }
        else cout << -1 << '\n';
        return;
    }
    if(c >= size){
        cout << size << '\n';
        return;
    }
    ll result = ((size - 1) - c + b)/b;
    if(result > size){
        cout << 0 << '\n';
    } 
    else{
        cout << size - result << '\n';
    }
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    long limit;
    cin >> limit;
    for(long i = 0; i < limit; i++) solve();
}