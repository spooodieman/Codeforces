#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

bool solved(ll x){
    if(x < 0) return false;
    while(x){
        if(x%10 == 7) return true;
        x/= 10;
    }
    return false;
}

void solve(){
    ll num; cin >> num;
    ll numCopy = num;
    ll operations = 1e9;
    
    if(solved(num)){
        cout << "0" << '\n';
        return;
    }

    for(ll i = 9; i < 1e12; i = i * 10 + 9){
        numCopy = num;
        ll curr = 0;
        while(!solved(numCopy)){
            numCopy += i;
            curr++;
        }
        operations = min(operations,curr);    
    }
    cout << operations << '\n';

}

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    long limit;
    cin >> limit;
    for(long i = 0; i < limit; i++) solve();
}